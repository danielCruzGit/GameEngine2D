#pragma once

#include "ShaderProgram.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/transform.hpp>

class StaticShader: public ShaderProgram {

private:
	const char* VERTEX_FILE = "src/shaders/vertexShader.txt";
	const char* FRAGMENT_FILE = "src/shaders/fragmentShader.txt";

	GLuint location_modelMatrix;
	GLuint location_projectionMatrix;
	GLuint location_viewMatrix;

public: 
	StaticShader();
	~StaticShader();
	void getAllUniformLocations();
	void loadModelMatrix(glm::mat4 matrix);
	void loadViewMatrix(glm::mat4 matrix);
	void loadProjectionMatrix(glm::mat4 matrix);
};