#pragma once

#include <GLFW/glfw3.h>
#include <iostream>

class Display{
public:
	GLFWwindow* window;

private:
	const int WIDTH = 1280;
	const int HEIGTH = 720;
	const int FPS_CAP = 80;
	const char* ScreenName= "2D Game Engine";
	double lastFrameTime;  //Idealmente isto seria um long
	float delta;

public:
	Display();
	~Display();
	void UpdateDisplay();
	float getFrameTimeSeconds();
	GLFWwindow *getDisplayWindow();
};

		 