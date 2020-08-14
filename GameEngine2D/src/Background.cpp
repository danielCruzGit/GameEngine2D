#include "Background.h"

Background::Background(Loader loader, int screenHeight) {
	std::string aux = "bglayer";
	for (int i = 1; i <= layers; i++) {
		std::string imageName = imageName + std::to_string(i);
		Texture texture = loader.loadTexture(imageName.c_str());
		textures.push_back(texture);
	}
	height = textures[1].height;
	width = textures[1].width;
	float factor = ceil(static_cast<float>(screenHeight) / height);

	float zValue = -7.0f;
	for (int i = 1; i <= 2*layers; i++) {
		RawModel model = loader.loadQuadVAO(width * factor, height * factor, zValue);
		models.push_back(model);
		if (i % 2 == 0) {
			zValue += 0.5f;
		}
	}
}

void Background::UpdateBackground()
{

}
