
add_library(render
        rendering_test.cpp
        rendering_test.h
)

include_directories(${GLUT_INCLUDE_DIRS})

target_include_directories(render PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ${GLUT_LIBRARY})





#External library
#target_include_directories(render PRIVATE ${CMAKE_SOURCE_DIR}/ext/freeglut/include/GL)