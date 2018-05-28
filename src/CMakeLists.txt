set(SOURCES "main.cpp" 
			"server/Server.cpp"
			"network/raknet/RakNetHandler.cpp"
			"util/ConsoleFormat.cpp"
			"util/Zlib.cpp"
)

include_directories("${PROJECT_SOURCE_DIR}/include")
include_directories("${PROJECT_SOURCE_DIR}/lib/RakNet")

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} raknet z)
