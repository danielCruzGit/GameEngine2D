#pragma once
#include "TexturedModel.h"
#include <glm/glm.hpp>

class Entity {

public: 
	TexturedModel model;
	glm::vec3 position;

	Entity();
	Entity(TexturedModel texturedModel, glm::vec3 vector);
	void setPosition(glm::vec3 vector);
};