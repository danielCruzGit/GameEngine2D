#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "RawModel.h"
#include <iostream>


class MasterRenderer {

public:
	void prepare();

	void render(RawModel model);

};