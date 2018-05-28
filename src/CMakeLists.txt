set(SOURCES "main.cpp" 
            "server/Server.cpp"
            "network/raknet/RakNetHandler.cpp"
            "util/ConsoleFormat.cpp"
            "util/Zlib.cpp"
)

include_directories("${PROJECT_SOURCE_DIR}/include")
include_directories("${PROJECT_SOURCE_DIR}/lib/RakNet")

add_executable(katana ${SOURCES})

target_link_libraries(katana raknet)

if(ANDROID)
    target_link_libraries(katana z)
endif(ANDROID)

if(UNIX)
    target_link_libraries(katana z pthread)
endif(UNIX)