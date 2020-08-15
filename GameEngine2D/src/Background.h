#pragma once
#include <vector>
#include "RawModel.h"
#include "Loader.h"
#include "Texture.h"
#include <string>
#include <math.h>     

class Background {
private:
	std::vector<RawModel> models;
	int height;
	int width;
	std::vector<Texture> textures;
	const int layers = 5;

public:
	Background(Loader loader, int screenHeight);
	void UpdateBackground();

};