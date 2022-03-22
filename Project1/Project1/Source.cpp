#include <GL\glut.h>
#include <iostream>
#include <windows.h>
using namespace std;

void myInit(void)
{
	// Clear all the screen color
	glClearColor(1, 1, 1, 1);

	// Sets background color to orang
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	// Specify the display area
	gluOrtho2D(-50, 200.0, -50.0, 200.0);
}

void myDisplay(void)
{
	// Clear the screen buffer
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(1.0);
	glLineWidth(5.0);

	glBegin(GL_QUADS);
	glColor3f(0, 1, 1);
	glVertex2i(0, 0);
	glVertex2i(100, 0);
	glVertex2i(100, 40);
	glVertex2i(0, 40);

	glColor3f(1, 1, 0);
	glVertex2i(110, 90);
	glVertex2i(130, 90);
	glVertex2i(130, 120);
	glVertex2i(110, 120);

	glEnd();

	glColor3f(0, 0, 0);

	glVertex2i(10, 40);

	glVertex2i(35, 110);

	glVertex2i(55, 40);

	glEnd();
	//Outline #1
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glLineWidth(7.0);
	glVertex2i(10, 40);
	glVertex2i(35, 110);
	glVertex2i(55, 40);
	glEnd();

	//Outline #2
	glBegin(GL_LINE_LOOP);

	glColor3f(0, 0, 0);

	glVertex2i(0, 0);
	glVertex2i(0, 120);
	glVertex2i(130, 120);
	glVertex2i(130, 0);

	glEnd();

	// Begin the TRIANGLES
	glBegin(GL_TRIANGLES);



	glColor3f(1, 0, 0);

	glVertex2i(10, 40);
	glVertex2i(35, 110);
	glVertex2i(55, 40);

	glColor3f(0, 1, 0);

	glVertex2i(35, 40);
	glVertex2i(55, 90);
	glVertex2i(75, 40);

	glColor3f(0, 0, 1);

	glVertex2i(60, 40);
	glVertex2i(75, 75);
	glVertex2i(92, 40);



	glEnd();



	glFlush();
}

// Driver Code
int main(int argc, char** argv)
{
	// Initialize the init function
	glutInit(&argc, argv);

	// Initialize the toolkit;
	glutInitDisplayMode(
		GLUT_SINGLE | GLUT_RGB);

	// Sets the display mode and
	// specify the colour scheme
	glutInitWindowSize(1200, 720);

	// Specify the window size
	glutInitWindowPosition(0, 0);

	// Sets the starting position
	// for the window
	glutCreateWindow("PYRAMIDS(GUI)");

	// Creates the window and
	// sets the title
	glutDisplayFunc(myDisplay);
	myInit();

	// Additional initializations
	glutMainLoop();

	// Go into a loop until event
	// occurs
	return 0;
}
