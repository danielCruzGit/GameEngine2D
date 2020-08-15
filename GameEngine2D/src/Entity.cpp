#include "Entity.h"

Entity::Entity() {
	position = glm::vec3(0.0f);
}

Entity::Entity(TexturedModel texturedModel, glm::vec3 vector)
{
	model = texturedModel;
	position = vector;
}

void Entity::setPosition(glm::vec3 vector)
{
	position = vector;
}
