#include "DisplayManager.h"

Display::Display() {

    window = glfwCreateWindow(WIDTH, HEIGTH, ScreenName, NULL, NULL);
    if (!window)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Get inicial frame time */
    lastFrameTime = glfwGetTime();
}

Display::~Display() {

}

void Display::UpdateDisplay() {

    /* Swap front and back buffers */
    glfwSwapBuffers(window);

    /* Calculate time between frames */
    double currentFrameTime = glfwGetTime();
    delta = float(currentFrameTime - lastFrameTime) / 1000.0f;
    lastFrameTime = currentFrameTime;

}

float Display::getFrameTimeSeconds() {
    return delta;
}

GLFWwindow * Display::getDisplayWindow() {
    return window;
}

