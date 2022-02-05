#include<GL/glut.h>
#include<iostream>

using namespace std;

void changeBackgroundColor();
void display();

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(400, 400);
	glutCreateWindow("OpenGL Setup Test");
	glutDisplayFunc(display);
	glClearColor(0.10, 0.0, 0.2, 1.0); // change background color
	glutMainLoop();
	return 0;
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3ub(184, 223, 16);
	
	// border around window
	glLineWidth(8.0);
	glBegin(GL_LINE_LOOP);
	
	glVertex2f(-1, -1);
	glVertex2f(-1, 1);
	glVertex2f(1, 1);
	glVertex2f(1, -1);
	
	glEnd();
	
	// mouth
	glLineWidth(3.0);
	glBegin(GL_LINES);
	
	glVertex2f(-0.15, -0.1);
	glVertex2f(0.15, -0.1);
	
	glEnd();
	
	// left and right eyes
	glBegin(GL_TRIANGLES);
	
	glVertex2f(-0.6, 0.3);
	glVertex2f(-0.4, 0.7);
	glVertex2f(-0.2, 0.3);
	
	glVertex2f(0.6, 0.3);
	glVertex2f(0.4, 0.7);
	glVertex2f(0.2, 0.3);

	glEnd();
	glFlush();
}
