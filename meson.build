project('OpenGLExample', 'c')

# Specify the target for your executable
executable('opengl_example', 'main.c')

# Tell Meson to use OpenGL
dep_gl = dependency('gl')

# Link the OpenGL library
opengl_example.add_dependency(dep_gl)
