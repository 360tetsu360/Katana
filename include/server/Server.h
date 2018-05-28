#pragma once

#include <string>

class Server
{
public:
	static void Initialize();
	static void Bind(int port, std::string ip_addr, int max_players, std::string server_name);

	void OnServerStart();
	void OnServerStop();
};