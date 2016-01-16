cmake_minimum_required (VERSION 2.6)
project (gleseng)

add_subdirectory(./external/glfw3)
INCLUDE_DIRECTORIES(./include)
INCLUDE_DIRECTORIES(./external/glfw3/include/)
LINK_DIRECTORIES(./external/glfw3/src/)
#set(EX_LIBS "-framework Cocoa -framework IOKit -framework CoreFoundation -framework CoreVideo -framework Carbon -framework OpenGL")


SET (SRCS
     src/main.cpp
     src/glwin.cpp
     src/glscene.cpp
)


add_executable(test ${SRCS})
TARGET_LINK_LIBRARIES(test glfw)
TARGET_LINK_LIBRARIES(test ${EX_LIBS})
