#ifndef __GL_PROGRAM_H__
#define __GL_PROGRAM_H__
namespace gleseng {
    class Program{
    public:
	Program();
	~Program();
	int AddShader(Shader *);
	int Link();
	int Run();
    private:
	Shaders ** _shaders;
    };
}
#endif
