#include "Loader.h"


RawModel Loader::loadToVAO(float positions[], unsigned int indices[], int verticesCount, int indicesCount) {
	GLuint vaoID = createVAO();
	bindIndicesBuffer(indices, indicesCount);
	storeDataInAttributeList(0, 3, positions, verticesCount);
	unbindVAO();
	return RawModel(vaoID, indicesCount);
}

GLuint Loader::createVAO() {
	GLuint vao;
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);
	VAOs.push_back(vao);
	return vao;
}

void Loader::storeDataInAttributeList(int AttributeNumber, int coordinateSize, float data[], int verticesCount) {
	GLuint vboID;
	glGenBuffers(1, &vboID);
	glBindBuffer(GL_ARRAY_BUFFER, vboID);
	VBOs.push_back(vboID);
	glBufferData(GL_ARRAY_BUFFER, verticesCount * coordinateSize *sizeof(float), data, GL_STATIC_DRAW);
	glVertexAttribPointer(AttributeNumber, coordinateSize, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(AttributeNumber);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
}

void Loader::bindIndicesBuffer(unsigned int data[], int indicesCount) {
	GLuint vboID;
	glGenBuffers(1, &vboID);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, vboID);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, indicesCount *sizeof(unsigned int), data, GL_STATIC_DRAW);
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

