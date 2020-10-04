# testGLSL
Some tests using OpenGL Shading Language (GLSL)

The code is based on the Getting Started tutorial at https://learnopengl.com

Initially we use the following libraries:

- GLFW: https://github.com/glfw/glfw. For creating windows, contexts and surfaces, reading input, handling events, etc.

- GLAD: https://glad.dav1d.de/. To abstract the OpenGL driver and the operating system. We have chosen:

   - Language: C/C++
   - Specification: OpenGL
   - API: gl version 4.1 (last supported version in MacOS)
   - Profile: Core

For MacOS we need to link also the following frameworks (in addition to the OpenGL framework):

- Cocoa
- IOKit
- CoreVideo