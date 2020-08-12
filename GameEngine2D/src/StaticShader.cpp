#include "StaticShader.h"

StaticShader::StaticShader(const char* vertexFile, const char* fragmentFile) : ShaderProgram(vertexFile, fragmentFile) {
}


StaticShader::~StaticShader() {
}

void StaticShader::getAllUniformLocations() {
	/*location_modelMatrix = getUniformLocation("transformationMatrix");
	location_projectionMatrix = getUniformLocation("projectionMatrix");
	location_viewMatrix = getUniformLocation("viewMatrix");*/
}

/*
void StaticShader::loadModelMatrix(glm::mat4 matrix) {
	loadMatrix(location_modelMatrix, matrix);
}

void StaticShader::loadViewMatrix(glm::mat4 matrix) {
	loadMatrix(location_viewMatrix, matrix);
}

void StaticShader::loadProjectionMatrix(glm::mat4 matrix) {
	loadMatrix(location_projectionMatrix, matrix);
}
*/