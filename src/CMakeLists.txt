
add_subdirectory(game)
add_subdirectory(render)

add_executable(main main.cpp)


#External fr fr no cap

find_package(GLUT)

include_directories(${GLUT_INCLUDE_DIRS})

target_link_libraries(main PRIVATE
        game
        render
        ${GLUT_LIBRARY}
)
