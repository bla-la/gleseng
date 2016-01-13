#include <glwin.h>
#include <glscene.h>
//#include <OpenGL/glu.h>
//#include <OpenGL/glext.h>
using namespace gleseng;
int main(int argv,char ** argc)
{
    GLWindow * win = new GLWindow();
    GLScene * scene = NULL;

    if (!win){
	return 1;
    }


    win->CreateWindow(1920,1080,"test");

    scene = new GLScene();

    win->SetScene(scene);
    while (!win->Run()){
    }

    return 0;
}
