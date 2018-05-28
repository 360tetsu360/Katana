set(SOURCES "main.cpp" 
            "server/Server.cpp"
            "network/raknet/RakNetHandler.cpp"
            "util/ConsoleFormat.cpp"
            "util/Zlib.cpp"
)

include_directories("${PROJECT_SOURCE_DIR}/include")
include_directories("${PROJECT_SOURCE_DIR}/lib/RakNet")

add_executable(katana ${SOURCES})

if(ANDROID)
    target_link_libraries(katana z)
endif(ANDROID)

target_link_libraries(katana raknet)
