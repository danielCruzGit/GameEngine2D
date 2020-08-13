#include "Texture.h"

Texture::Texture(const char* file) {
	std::string fileName(file);
	std::string filePath = "res/textures/" + fileName + ".png";

	stbi_set_flip_vertically_on_load(1);
	data = stbi_load(filePath.c_str(), &width, &height, &BPP, 4);

	textureID = 0;
}

Texture::Texture() {
	width = 0;
	height = 0;
	BPP = 0;
	data = nullptr;
	textureID = 0;
}

void Texture::setTextureID(GLuint ID) {
	textureID = ID;
}

Texture::~Texture() {
	if (data) {
		stbi_image_free(data);
	}
}