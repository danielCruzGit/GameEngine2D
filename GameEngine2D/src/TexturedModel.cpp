#include "TexturedModel.h"

TexturedModel::TexturedModel()
{
}

TexturedModel::TexturedModel(RawModel model, Texture modelTexture) {
	texture = modelTexture;
	rawModel = model;
}