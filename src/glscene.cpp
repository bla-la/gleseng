#include <glscene.h>


namespace gleseng {
    GLScene::GLScene(){
    }

    GLScene::~GLScene(){
    }

    int GLScene::Run(void){
	GLfloat clearColor[] = {0.6f, 0.6f, 0.6f, 1.0f};
	glClearBufferfv(GL_COLOR,0,clearColor);

	return 0;
    }
}
