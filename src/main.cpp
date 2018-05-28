#include <stdio.h>
#include <thread>

#include "server/Server.h"

void start()
{
	Server::Initialize();
}

int main(int argc, char* argv[])
{
	printf("Starting Katana...\n");
	
	std::thread server(start);
	server.join();
}
