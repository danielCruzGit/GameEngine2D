#pragma once
#include "Texture.h"
#include "RawModel.h"


class TexturedModel {
public:
	RawModel rawModel;
	Texture texture;

	TexturedModel();
	TexturedModel(RawModel model, Texture modelTexture);
};