#version 330 core

layout (location = 0) in vec3 coordinates;

void main()
{
   gl_Position = vec4(coordinates.x, coordinates.y, coordinates.z, 1.0);
}