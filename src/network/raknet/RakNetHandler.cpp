#include <string>
#include <sstream>

#include "RakPeerInterface.h"
#include "RakNetTypes.h"
#include "BitStream.h"

#include "network/raknet/RakNetHandler.h"

// TODO: move out of here
#define MCPE_PROTOCOL "223"
#define MCPE_VERSION "1.2.13"
void RakNetHandler::Initialize(int port, std::string ip_addr, int max_players, std::string server_name)
{
	RakNet::RakPeerInterface *peer = RakNet::RakPeerInterface::GetInstance();
	RakNet::SocketDescriptor socket_desc(port, ip_addr.c_str());

	if(peer->Startup(max_players, &socket_desc, 1) == RakNet::RAKNET_STARTED)
	{
		peer->SetMaximumIncomingConnections(max_players);
		std::ostringstream motd;
		motd << "MCPE;" << server_name << ";" << MCPE_PROTOCOL << ";" << MCPE_VERSION << ";0;" << max_players;
		std::string message = motd.str();

		// Adding size of packet
		message.insert(message.begin(), message.size());
		message.insert(message.begin(), 0x00);

		peer->SetOfflinePingResponse(message.c_str(), message.size());
	
		while(1)
		{
			RakNetHandler::Handle(peer);
		}
	}
}

void RakNetHandler::Handle(RakNet::RakPeerInterface *peer)
{	RakNet::Packet *packet;
    for(packet = peer->Receive(); packet; peer->DeallocatePacket(packet), packet = peer->Receive())
	{
		switch(packet->data[0])
		{
			printf("[%s]: %s", packet->data[0], packet->data);
			
			case 0xFE: // MCPE Packet
			{
				RakNet::BitStream stream(packet->data, packet->length, false);
				stream.IgnoreBytes(sizeof(RakNet::MessageID));
				
				int length;
				
				stream.Read(length);
				break;
			}
		}
	}
}
