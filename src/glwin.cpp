#include <glwin.h>

namespace gleseng {
    GLWindow::GLWindow(){
    }

    GLWindow::~GLWindow(){
    }

    int GLWindow::CreateWindow(int width,int height,char * cap){
	if (!glfwInit())
	    return -1;

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_CLIENT_API,GLFW_OPENGL_API);
	/* Create a windowed mode window and its OpenGL context */
	_window = glfwCreateWindow(width, height, cap, NULL, NULL);
	if (!_window){
	    return -1;
	}

	glfwMakeContextCurrent(_window);

	return 0;
    }

    int GLWindow::DestroyWindow(void){
	return 0;
    }

    int GLWindow::SetScene(GLScene *scene){
	_scene = scene;
    }

    int GLWindow::Run(void){
	if(!_window || !_scene){
	    return -1;
	}

	if (glfwWindowShouldClose(_window)){
	    return -1;
	}

	_scene->Run();
	glfwSwapBuffers(_window);
	glfwPollEvents();

	return 0;
    }
}
