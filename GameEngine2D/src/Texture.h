#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include "stb_image\stb_image.h"
#include <string>

class Texture {
public:
	int width, height, BPP;
	unsigned char* data;
	std::string fileName;
	GLuint textureID;
	bool hasTransparency;

	Texture();
	Texture(const char* file);
	~Texture();
	void setTextureID(GLuint ID);
};