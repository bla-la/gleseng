#ifndef __GL_WIN_H__
#define __GL_WIN_H__
#define GLFW_INCLUDE_GLCOREARB
#include <GLFW/glfw3.h>
#include <glscene.h>

namespace gleseng {
    class GLWindow {
    public:
	GLWindow();
	~GLWindow();
	int CreateWindow(int width,int height,char * cap);
	int DestroyWindow(void);
	int Run(void);
	int SetScene(GLScene *scene);
    private:
	GLFWwindow * _window;
	GLScene * _scene;
    };
}
#endif
