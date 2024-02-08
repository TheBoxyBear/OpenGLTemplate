#include <GL/glew.h>
#include <GL/glut.h>
#include <cmath>

// Display
void display()
{
    glFlush(); // Render Now
}

// Initialization
void initialize()
{
    glClearColor(0.2f, 0.2f, 0.2f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
}

// Main
int main(int argc, char* argv[])
{
    glutInit(&argc, argv); // Initialize GLUT
    int x = 512, y = 512;  // x and y value
    glutInitWindowPosition(
        (int)(glutGet(GLUT_SCREEN_WIDTH) - x) / 2,
        (int)(glutGet(GLUT_SCREEN_HEIGHT) - y) / 2); // Position the window's center
    glutInitWindowSize(x, y);                        // Set the window's initial width & height
    glutCreateWindow("OpenGL Template");         // Create a window with the given title
    initialize();                                    // Initializing
    glutDisplayFunc(display);                        // Register display callback handler for window re-paint
    glutMainLoop();                                  // Enter the event-processing loop
    return 0;
}

// End