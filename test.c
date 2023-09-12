#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void display() {
    glClearColor(0.0, 0.0, 1.0, 1.0); // Set the clear color to blue
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer
    glFlush(); // Flush the OpenGL pipeline
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("OpenGL Example");

    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}
