#ifndef __GL_MATERIAL_H__
#define __GL_METERIAL_H__
#include <glshader.h>
#include <glprogram.h>

namespace gleseng{
    class Meterial {
    public:
	Meterial();
	~Meterial();
	Run();
    private:
	Program * _program;
	Shader ** _shaders;
    };
}
#endif
