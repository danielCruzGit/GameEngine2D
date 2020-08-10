#include "Loader.h"


RawModel Loader::loadToVAO(float positions[],int size) {

	GLuint vaoID = createVAO();
	storeDataInAttributeList(0, 3, positions);
	unbindVAO();
	return RawModel(vaoID, size);
}

GLuint Loader::createVAO() {
	GLuint vao;
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);
	VAOs.push_back(vao);
	return vao;
}

void Loader::storeDataInAttributeList(int AttributeNumber, int coordinateSize, float data[]) {
	GLuint vboID;
	glGenBuffers(1, &vboID);
	glBindBuffer(GL_ARRAY_BUFFER, vboID);
	VBOs.push_back(vboID);
	glBufferData(GL_ARRAY_BUFFER, sizeof(data), data, GL_STATIC_DRAW);
	glVertexAttribPointer(AttributeNumber, coordinateSize, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(AttributeNumber);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
}

void Loader::unbindVAO() {
	glBindVertexArray(0);
}

void Loader::cleanUp() {
	for (GLuint vao : VAOs) {
		glDeleteVertexArrays(1,&vao);
	}
	for (GLuint vbo : VBOs) {
		glDeleteVertexArrays(1, &vbo);
	}
}

