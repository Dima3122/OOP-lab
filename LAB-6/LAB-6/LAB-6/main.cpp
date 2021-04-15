#include "foo.h"

int WinWidth = 640, WinHeight = 480;
int WinFar = 10;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "ru");
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE |GLUT_RGB);
	glutInitWindowSize(WinWidth, WinHeight);
	glutInitWindowPosition(300, 200);
	//glutCreateWindow("LAB-5");
	glutSetWindow(glutCreateWindow("LAB-5"));
	glClearColor(1, 0, 0, 1.0);
	glOrtho(0.0f, WinWidth, WinHeight, 0.0f, 0.0f, 1.0f);
	glutDisplayFunc(display);
	glutTimerFunc(50, TimerFunction, 1);
	glutMainLoop();
	return 0;
}