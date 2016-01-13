#ifndef __GL_ACTOR_H__
#define __GL_ACTOR_H__
#include <glmaterial.h>
#include <glmesh.h>

namespace gleseng {
    class Actor{
    public:
	Actor();
	~Actor();
	int Run();
	int SetMaterial();
	int SetMesh();
    private:
	Material * _material;
	Mesh * _mesh;
    };
}
#endif
