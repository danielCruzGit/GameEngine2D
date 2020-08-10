#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include "RawModel.h"
#include "DisplayManager.h"
#include "Loader.h"
#include "MasterRenderer.h"


int main(void)
{
    /* Initialize the library */
    if (!glfwInit())
        return -1;

    Display display;

    if (glewInit() != GLEW_OK)
    {
        std::cout << "Glew failed on initialize!" << std::endl;
    }

    std::cout << glGetString(GL_VERSION) << std::endl; 

    Loader loader;
    MasterRenderer renderer;

    float vertices[] = {
        -0.5f, 0.5f, 0.0f,
        -0.5f, -0.5f, 0.0f,
        0.5f, -0.5f, 0.0f,

        0.5f, -0.5f, 0.0f,
        0.5f, 0.5f, 0.0f,
        -0.5f, 0.5f, 0.0f
    };

    int size = sizeof(vertices) / sizeof(float) / 3;
    RawModel model = loader.loadToVAO(vertices,size);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(display.window))
    {
        /* Render here */
        renderer.prepare();
        renderer.render(model);
        display.UpdateDisplay();

        /* Poll for and process events */
        glfwPollEvents();
    }

    loader.cleanUp();
    glfwTerminate();
    return 0;
}