#ifndef __GL_SHADER_H__
#define __GL_SHADER_H__
namespace gleseng {
    class Shader{
    public:
	Shader();
	~Shader();
	int LoadShader(char * path);
	GLuint GetId();
    private:
	char * _shaderText;
	GLuint _shaderType;
	GLuint _shaderId;
    };
}
#endif
