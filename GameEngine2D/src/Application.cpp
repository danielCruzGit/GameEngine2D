#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include "RawModel.h"
#include "DisplayManager.h"
#include "Loader.h"
#include "MasterRenderer.h"
#include "StaticShader.h"


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

    /*float vertices[] = {
        -0.5f, -0.5f, 0.0f,
        0.5f, -0.5f, 0.0f,
        0.5f, 0.5f, 0.0f,
        -0.5f, 0.5f, 0.0f
    };

    unsigned int indices[] = {
        0, 1, 2,
        2, 3, 0
    };

    RawModel model = loader.loadToVAO(vertices,indices,4,6);*/

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(display.window))
    {

        /* Render here */
        renderer.prepare();
        shader.start();
        renderer.render(model);
        shader.stop();
        display.UpdateDisplay();

        /* Poll for and process events */
        glfwPollEvents();
    }

    loader.cleanUp();
    glfwTerminate();
    return 0;
}