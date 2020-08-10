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
	void storeDataInAttributeList(int AttributeNumber, int coordinateSize, float data[]);
	void unbindVAO();
public:
	RawModel loadToVAO(float positions[], int size);
	void cleanUp();
};
