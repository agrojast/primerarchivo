
//Semestre 2017 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//*************											******//
//*************											******//
//************************************************************//
#include "Main.h"
void InitGL ( GLvoid )     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(1.0f, 1.0f, 1.0f, 0.0f);				// Negro de fondo
	//glClearDepth(1.0f);									// Configuramos Depth Buffer
	//glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	
	
}
void dcx(float inicio, float fin, float posy,float var)
{

	for (float i = inicio; i <fin; i+=var)
	{
		glVertex3f(i, posy, -1.0f);
	}

}

void dcy(float inicio, float fin, float posx,float var)
{

	for (float i = inicio; i <fin; i +=var)
	{
		glVertex3f(posx,i, -1.0f);
	}

}
void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview

	//Poner aqui codigo ha dibujar
	//glPointSize(10.0);
	//glColor3f(1.0f, 0.0f, 0.0f);
	//glBegin(GL_POINTS);
	//dcx(-1.5f,-0.5f, 1.0f,0.5f);
 //   dcx(0.5f,1.5f, 1.0f,0.5f);
	//dcx(-1.5f,1.5f,0.5f, 0.5f);
	//dcx(-1.5f,1.5f,0.0f, 0.5f);
	//dcx(-1.0f, 1.0f, -0.5f, 0.5f);
	//dcx(-0.5f, 0.5f, -1.0f, 0.5f);
 //   //Contorno negro
	//glColor3f(0.0f, 0.0f, 0.0f);
	//dcy(0.0f, 1.5f, -1.95f,0.4f);
	//dcx(-1.5f, -0.5f, 1.45f,0.4f);
	//dcx(-0.5f, 0.0f, 0.95f, 0.4f);
	//dcx(0.5f, 1.0f, 1.45f, 0.4f);
	//dcy(0.0f, 1.5f, 1.45f, 0.4f);
	//glVertex3f(-1.5f, -0.5f, -1.0f);
	//glVertex3f(-1.0f, -1.0f, -1.0f);
	//glVertex3f(1.0f, -0.5f, -1.0f);
	//glVertex3f(0.5f, -1.0f, -1.0f);
	//dcx(-0.5, 0.5, -1.5f, 0.4f);
	//glEnd();


 ////  
	////glBegin(GL_TRIANGLES);
	////glVertex3f(0, 0,-1); //v1
	////glVertex3f(2, 0,-1); //v2
	////glVertex3f(2, 2,-1); //v3
 ////glEnd(); 
	////glBegin(GL_TRIANGLE_FAN);
	////glVertex3f(0.0f, 0.0f, -1.0f); //vertex 1
	////glVertex3f(0.0f, 1.0f, -1.0f); //vertex 2
	////glVertex3f(1.0f, 0.0f, -1.0f); //vertex 3
	////glVertex3f(2.0f, 1.0f, -1.0f); //vertex 3
	////glEnd();

	//LETRA Y ESTRELLAS

	glBegin(GL_QUADS); //letra A
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(8, 9, -1.2f);
	glVertex3f(8, 2, -1.2f);
	glVertex3f(10, 2, -1.2f); 
	glVertex3f(10, 7, -1.2f);
	glEnd();
	glBegin(GL_QUADS); //letra A
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(8, 9, -1.2f);
	glVertex3f(14, 9, -1.2f);
	glVertex3f(12, 7, -1.2f);
	glVertex3f(10, 7, -1.2f);
	glEnd();
	glBegin(GL_QUADS); //letra A
	glColor3f(225.0f, 0.0f, 225.0f);
	glVertex3f(14, 2, -1.2f);
	glVertex3f(14, 9, -1.2f);
	glVertex3f(12, 7, -1.2f);
	glVertex3f(12, 2, -1.2f);
	glEnd();
	glBegin(GL_TRIANGLES); //letra A
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(10, 5, -1.2f);
	glVertex3f(12, 5, -1.2f);
	glVertex3f(10, 4, -1.2f);
	glEnd();
	glBegin(GL_TRIANGLES); //letra A
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(10, 4, -1.2f);
	glVertex3f(12, 4, -1.2f);
	glVertex3f(12, 5, -1.2f);
	glEnd();
	glBegin(GL_QUADS); //letra R
	glColor3f(225.0f, 0.0f, 225.0f);
	glVertex3f(15, 9, -1.2f);
	glVertex3f(15, 2, -1.2f);
	glVertex3f(17, 2, -1.2f);
	glVertex3f(17, 7, -1.2f);
	glEnd();
	glBegin(GL_QUADS); //letra R
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(15, 9, -1.2f);
	glVertex3f(21, 9, -1.2f);
	glVertex3f(19, 7, -1.2f);
	glVertex3f(17, 7, -1.2f);
	glEnd();
	glBegin(GL_QUADS); //letra R
	glColor3f(0.0f, 225.0f, 225.0f);
	glVertex3f(21, 9, -1.2f);
	glVertex3f(19, 7, -1.2f);
	glVertex3f(19, 4, -1.2f);
	glVertex3f(21, 4, -1.2f);
	glEnd();
	glBegin(GL_TRIANGLES); //letra R
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(17, 5, -1.2f);
	glVertex3f(19, 5, -1.2f);
	glVertex3f(17, 4, -1.2f);
	glEnd();
	glBegin(GL_TRIANGLES); //letra R
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(17, 4, -1.2f);
	glVertex3f(19, 5, -1.2f);
	glVertex3f(19, 4, -1.2f);
	glEnd();
	glBegin(GL_TRIANGLES); //letra R
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(17, 4, -1.2f);
	glVertex3f(19, 2, -1.2f);
	glVertex3f(19, 4, -1.2f);
	glEnd();
	glBegin(GL_TRIANGLES); //letra R
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(21, 2, -1.2f);
	glVertex3f(19, 2, -1.2f);
	glVertex3f(19, 4, -1.2f);
	glEnd();
	glBegin(GL_QUADS); //letra R
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(22, 2, -1.2f);
	glVertex3f(22, 6, -1.2f);
	glVertex3f(22, 4, -1.2f);
	glEnd();
	glBegin(GL_QUADS); //Estrella lado izquierdo abajo
	glColor3f(0.0f, .0f, 0.0f);
	glVertex3f(23.5, 4.5, -1.2f);
	glVertex3f(25, 5, -1.2f);
	glVertex3f(25, 4, -1.2f);
	glVertex3f(23, 3.5, -1.2f);
	glEnd(); 
	glBegin(GL_QUADS); //Estrella lado derecho abajo
	glColor3f(225.0f, 225.0f, 0.0f);
	glVertex3f(25, 4, -1.2f);
	glVertex3f(27, 3.5, -1.2f);
	glVertex3f(26.5, 4.5, -1.2f);
	glVertex3f(25, 5, -1.2f);
	glEnd();
	glBegin(GL_QUADS); //Estrella lado izquierda arriba
	glColor3f(0.0f, 0.0f, 225.0f);
	glVertex3f(21.5, 5, -1.2f);
	glVertex3f(23.8, 5.3, -1.2f);
	glVertex3f(25, 5, -1.2f);
	glVertex3f(23.5, 4.5, -1.2f);
	glEnd();
	glBegin(GL_QUADS); //Estrella lado derecho arriba
	glColor3f(0.0f, 225.0f, 0.0f);
	glVertex3f(25, 5, -1.2f);
	glVertex3f(26.5, 5.3, -1.2f);
	glVertex3f(28.5, 5, -1.2f);
	glVertex3f(26.5, 4.5, -1.2f);
	glEnd();
	glBegin(GL_QUADS); //Estrella lado  arriba
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(25, 5, -1.2f);
	glVertex3f(23.8, 5.3, -1.2f);
	glVertex3f(25, 6.5, -1.2f);
	glVertex3f(26.5, 5.3, -1.2f);
	glEnd();







	glFlush();
}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
	if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Ortogonal
	//glOrtho(-10,1,-10,1,1,1.2);
	glOrtho(0, 30, 0, 10, 0.1, 7);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();									
}


// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	 switch (key) 
	 {
		case 27: exit(0);
				 break;
	 }
	  glutPostRedisplay();
}    


int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitWindowSize  (600, 600);	// Tamaño de la Ventana
  glutInitWindowPosition (500,200);	//Posicion de la Ventana
  glutCreateWindow    ("LETRAS Y ESTRELLAS"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc	  (keyboard);	//Indicamos a Glut función de manejo de teclado
  glutMainLoop        ( );          // 

  return 0;
}

