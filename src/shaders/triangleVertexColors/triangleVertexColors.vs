#version 330 core

layout (location = 0) in vec3 coordinates;
layout (location = 1) in vec3 color;

out vec3 outputColor;

void main()
{
   gl_Position = vec4(coordinates.x, coordinates.y, coordinates.z, 1.0);
   outputColor = color;
}