#ifndef SHADER_H
#define SHADER_H

#include <glad/glad.h> 
  
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
  
class Shader
{
  private:

    std::string readFile(const char *path);
    unsigned int compile(int shaderType, const char *shaderCode);

  public:
    
    // the program ID
    unsigned int ID;
  
    // constructor reads and builds the shader
    Shader(const char* vertexPath, const char* fragmentPath);
    
    // use/activate the shader
    void use();
    
    // utility uniform functions
    void setBool(const std::string &name, bool value) const;  
    void setInt(const std::string &name, int value) const;   
    void setFloat(const std::string &name, float value) const;
    void setVec4f(const std::string &name, float x, float y, float z, float w) const;
};
  
#endif