#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "RawModel.h"
#include <iostream>
#include <glm/glm.hpp>
#include "StaticShader.h"
#include "TexturedModel.h"
#include "Entity.h"
#include <vector>
#include <map>


class MasterRenderer {

private:
	glm::mat4 projectionMatrix;
	StaticShader shader = StaticShader("src/shaders/vertexShader.vert", "src/shaders/fragmentShader.frag");
	std::map<TexturedModel,std::vector<Entity>> HashMap;

public:
	MasterRenderer();
	void prepare();
	void createProjectionMatrix();
	void render();
	void processEntity();

};