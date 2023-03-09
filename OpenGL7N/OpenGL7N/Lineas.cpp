#include <gl/glut.h>

void Iniciar() {
	glClearColor(0,0,1,1);
	glColor3f(1.0, 0, 0);
	glLineWidth(3.0);
	gluOrtho2D(0,800,0,600);
}
void dibujarLinea() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	glVertex2i(100, 100);
	glVertex2i(400,100);

	glVertex2i(400, 100);
	glVertex2i(400, 400);

	glVertex2i(400, 400);
	glVertex2i(100, 400);

	glVertex2i(100, 400);
	glVertex2i(100, 100);

	glVertex2i(400, 400);
	glVertex2i(250, 600);

	glVertex2i(100, 100);
	glVertex2i(250, 600);
	glEnd();
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv); //inicializa OpenGL
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(800, 600); //Tama?o de pantalla
	glutInitWindowPosition(100, 100);//Posicion de inicio de pantalla
	glutCreateWindow("Demo 2");//Titulo de pantalla
	glutDisplayFunc(dibujarLinea);
	Iniciar();
	glutMainLoop();
	return 0;
}