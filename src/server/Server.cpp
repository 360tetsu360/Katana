#include <string>
#include <chrono>
#include <iostream>

#include "server/Server.h"
#include "network/raknet/RakNetHandler.h"
#include "util/ConsoleFormat.h"

// TODO: move out of here
#define MCPE_PROTOCOL "223"
#define MCPE_VERSION "1.2.13"

void Server::Initialize()
{
	std::cout << ConsoleFormat::Gold << " " << std::endl;
	std::cout << ConsoleFormat::Blue << ",_._._._._._._._._" << ConsoleFormat::DarkBlue << "|" << ConsoleFormat::Gray << "_________________________________________________," << std::endl;
	std::cout << ConsoleFormat::Blue << "|_|_|_|_|_|_|_|_|_" << ConsoleFormat::DarkBlue << "|" << ConsoleFormat::Gray << "________________________________________________/" << std::endl;
	std::cout << ConsoleFormat::Gold << "     _           " << ConsoleFormat::DarkBlue << " l" << std::endl;
	std::cout << ConsoleFormat::Gold << "    | | ____ _| |_ __ _ _ __   __ _" << std::endl;
	std::cout << ConsoleFormat::Gold << "    | |/ / _` | __/ _` | '_ \\ / _` |    " << ConsoleFormat::Aqua << "Minecraft " << MCPE_VERSION << ", protocol " << MCPE_PROTOCOL << std::endl;
	std::cout << ConsoleFormat::Gold << "    |   < (_| | || (_| | | | | (_| |    " << ConsoleFormat::Aqua << "Katana " << "1.0.0" << std::endl;
	std::cout << ConsoleFormat::Gold << "    |_|\\_\\__,_|\\__\\__,_|_| |_|\\__,_|" << std::endl;
	std::cout << ConsoleFormat::Gold << " " << std::endl;
	std::cout << ConsoleFormat::Gold << "Katana is a new Minecraft Bedrock server software, created with " << ConsoleFormat::Red << "<3" << ConsoleFormat::Gold << ", by Luke." << ConsoleFormat::Reset << std::endl;

	Server::Bind(19132, "0.0.0.0", 20, "Test Server");
}

void Server::Bind(int port, std::string ip_addr, int max_players, std::string server_name)
{   
	std::chrono::high_resolution_clock::time_point start_time = std::chrono::high_resolution_clock::now();
	
	RakNetHandler* handler;
	handler->Initialize(port, ip_addr, max_players, server_name);

	std::chrono::high_resolution_clock::time_point end_time = std::chrono::high_resolution_clock::now();
	long exec_time = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();

	printf("Server Invoked, Took %ldms\n", exec_time);
	printf("Binded server on %s:%d\n", ip_addr.c_str(), port);
}

