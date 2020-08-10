#pragma once
#include <GLFW/glfw3.h>

class RawModel {

private:
	GLuint VAO;
	int vertexCount;

public:
	RawModel(GLuint vertexArrayObject, int vertexCount);
	~RawModel();
	int getVertexCount();
	GLuint getVaoID();
};




