#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "RawModel.h"


class MasterRenderer {

public:
	void prepare();

	void render(RawModel model);

};