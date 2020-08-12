#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/transform.hpp>
#include "ShaderProgram.h"

class StaticShader: public ShaderProgram {

private:
	const char* VERTEX_FILE = "shaders/vertexShader.vert";
	const char* FRAGMENT_FILE = "shaders/fragmentShader.frag";

	GLuint location_modelMatrix;
	GLuint location_projectionMatrix;
	GLuint location_viewMatrix;

public: 
	StaticShader(const char* vertexFile, const char* fragmentFile);
	~StaticShader();
	void getAllUniformLocations();
	/*
	void loadModelMatrix(glm::mat4 matrix);
	void loadViewMatrix(glm::mat4 matrix);
	void loadProjectionMatrix(glm::mat4 matrix);
	*/
};