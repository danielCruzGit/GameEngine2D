#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <vector>
#include "RawModel.h"
#include <iostream>

class Loader {
private:
	std::vector<GLuint> VAOs;
	std::vector<GLuint> VBOs;

	GLuint createVAO();
	void storeDataInAttributeList(int AttributeNumber, int coordinateSize, float data[], int indicesCount);
	void unbindVAO();
	void bindIndicesBuffer(unsigned int data[], int indicesCount);
	
public:
	RawModel loadToVAO(float positions[], unsigned int indices[], int verticesCount, int indicesCount);
	void cleanUp();
};
