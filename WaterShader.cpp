#include <GL/glew.h>
#include <GL/glut.h>
#include <WaterShader.hpp>


WaterShader::WaterShader()
{
  glCreateShader(GL_VERTEX_SHADER);
}

WaterShader::~WaterShader()
{
  
}