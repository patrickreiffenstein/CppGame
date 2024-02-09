
add_library(game
        player.cpp
        vector.cpp
        vector.h
        player.h
)

target_include_directories(game PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})