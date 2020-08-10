#include "RawModel.h"

RawModel::RawModel(GLuint vertexArrayObject,int VertexCount) {
	VAO = vertexArrayObject;
	vertexCount = VertexCount;
}

RawModel::~RawModel() {
}

GLuint RawModel::getVaoID() {
	return VAO;
}

int RawModel::getVertexCount() {
	return vertexCount;
}