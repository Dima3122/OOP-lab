#include "foo.h"
#include "dot.h"

int WinWidth = 640,
WinHeight = 480;
int WinFar = 10;

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(WinWidth, WinHeight);
	glutInitWindowPosition(150, 150);
	glutCreateWindow("LAB-2");
	glClearColor(0, 0, 0, 1.0);
	glOrtho(0.0f, WinWidth, WinHeight, 0.0f, 0.0f, 1.0f);
	glutDisplayFunc(display);
	glutTimerFunc(100, TimerFunction, 1);
	glutMainLoop();
	return 0;
}