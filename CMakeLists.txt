cmake_minimum_required (VERSION 2.6)
project (gleseng)

INCLUDE_DIRECTORIES(./include)
LINK_DIRECTORIES(/opt/glfw/lib/)
set(EX_LIBS "-framework Cocoa -framework IOKit -framework CoreFoundation -framework CoreVideo -framework Carbon -framework OpenGL")


SET (SRCS
     src/main.cpp
     src/glwin.cpp
     src/glscene.cpp
)


add_executable(test ${SRCS})
TARGET_LINK_LIBRARIES(test glfw3)
TARGET_LINK_LIBRARIES(test ${EX_LIBS})
