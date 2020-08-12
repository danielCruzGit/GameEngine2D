#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <iostream>


class ShaderProgram { 
private:
    char* filetobuf(const char* file);
    void cleanup();
    GLuint  vertexshader;
    GLuint  fragmentshader;
    GLchar* vertexsource;
    GLchar* fragmentsource;

public:
    GLuint   shaderprogram;
    ShaderProgram();
    ShaderProgram(const char* vertex_file_path, const char* fragment_file_path);
    ~ShaderProgram() { cleanup(); }
    GLuint  loadShaders(const char* vertex_file_path, const char* fragment_file_path);
    GLuint linkShaderProgram();
    
    inline void start() { glUseProgram(shaderprogram); }
    inline void stop() { glUseProgram(0); }

    virtual void getAllUniformLocations() = 0;

protected:
    GLuint getUniformLocation(const char* uniformName);
	
    void loadFloat(int location, float value);
	void loadInt(int location, int value);
	void loadVector(int location, glm::vec3 vector); 
    void loadVector(int location, glm::vec4 vector);
    void loadBoolean(int location, bool value);
    void loadMatrix(int location, glm::mat4 matrix);
};
