#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include "DisplayManager.h"


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

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(display.window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        display.UpdateDisplay();

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}