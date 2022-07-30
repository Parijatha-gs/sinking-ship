#include<gl/glut.h>
#include<windows.h>

static int ani = 0;
int flag = 0;
float pos, y = 0, j = 0, k = 0, rep = -600;

void menu(int n) {
	if (n == 1)
		ani = 1;
	else if (n == 2)
		ani = 0;
	else if (n == 0)
		exit(0);


	glutPostRedisplay();

}
void init()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glColor3f(1.0, 0.0, 0.0);
	glLineWidth(3.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glutCreateMenu(menu);

	glutAddMenuEntry("Start", 1);
	glutAddMenuEntry("Stop", 2);
	glutAddMenuEntry("exit", 0);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutPostRedisplay();
	gluOrtho2D(0, 1024, 0, 768);


}

void bitmap_output(int x, int y, const char* string, void* font)
{
	int len, i;
	glRasterPos2f(x, y);
	len = (int)strlen(string);
	for (i = 0; i < len; i++)
	{
		glutBitmapCharacter(font, string[i]);
	}
}

void myMouse1(int btn, int state, int x, int y)
{
	if (btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN)

		flag = 1;
	glutPostRedisplay();

}



GLint x1 = 350, y11 = 80;




void iceberg(int x, int i)
{
	if (x >= 210)
	{
		glColor3f(0.81, 0.81, 0.81);
		glBegin(GL_POLYGON);
		glVertex2i(870, 460 + i);
		glVertex2i(970, 420 + i);
		glVertex2i(990, 370 + i);
		glVertex2i(940, 310 + i);
		glVertex2i(910, 310 + i);
		glVertex2i(890, 410 + i);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2i(1010, 310 + i);
		glVertex2i(1005, 270 + i);
		glVertex2i(1000, 230 + i);
		glVertex2i(1010, 210 + i);
		glVertex2i(980, 170 + i);
		glVertex2i(940, 200 + i);
		glVertex2i(905, 105 + i);
		glEnd();

		glBegin(GL_POLYGON);

		glVertex2i(970, 135 + i);
		glVertex2i(950, 120 + i);
		glVertex2i(920, 110 + i);
		glVertex2i(905, 95 + i);
		glVertex2i(920, 100 + i);
		glVertex2i(890, 190 + i);
		glVertex2i(910, 290 + i);
		//glVertex2i(890, 390 + i);

		glEnd();

		glColor3f(0.80, 0.91, 0.81);
		glBegin(GL_POLYGON);
		glVertex2i(870, 400 + i);
		glVertex2i(890, 300 + i);
		glVertex2i(870, 200 + i);
		glVertex2i(890, 110 + i);
		glVertex2i(795, 115 + i);
		glVertex2i(800, 250 + i);
		glVertex2i(775, 390 + i);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2i(755, 115 + i);
		glVertex2i(690, 200 + i);
		glVertex2i(680, 300 + i);
		glVertex2i(705, 350 + i);
		glVertex2i(718, 370 + i);
		glVertex2i(735, 390 + i);
		glVertex2i(760, 250 + i);
		glVertex2i(755, 115 + i);

		glEnd();

		glutPostRedisplay();
	}
	else
	{
		glColor3f(0.81, 0.81, 0.81);
		glBegin(GL_POLYGON);
		glVertex2i(870, 450);
		glVertex2i(970, 410);
		glVertex2i(990, 360);
		glVertex2i(1010, 310);
		glVertex2i(1005, 270);
		glVertex2i(1000, 230);
		glVertex2i(1010, 210);
		glVertex2i(980, 170);
		glVertex2i(970, 145);
		glVertex2i(950, 130);
		glVertex2i(920, 120);
		glVertex2i(905, 105);
		glVertex2i(890, 110);
		glVertex2i(795, 115);
		glVertex2i(750, 200);
		glVertex2i(730, 300);
		glVertex2i(745, 350);
		glVertex2i(758, 370);
		glVertex2i(870, 400);

		glEnd();
	}

}


void ship(int x, int y)
{


	/*base*/

	glBegin(GL_POLYGON);
	glColor3f(0.68f, 0.29f, 0.0f);
	glVertex2f(20 + x, 238 + y);
	glColor3f(0.68f, 0.29f, 0.0f);
	glVertex2f(20 + x, 220 + y);
	glColor3f(.0f, 0.0f, 0.0f);
	glVertex2f(82 + x, 100 + y);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(438 + x, 54 + y);

	glColor3f(0.68f, 0.29f, 0.0f);
	glVertex2f(584 + x, 196 + y);
	glColor3f(0.68f, 0.29f, 0.0f);
	glVertex2f(600 + x, 220 + y);
	glEnd();

	/*p1*/

	glColor3f(0.30, 0.30, 0.30);
	glBegin(GL_POLYGON);

	glVertex2f(70 + x, 236 + y);
	glVertex2f(70 + x, 256 + y);
	glVertex2f(478 + x, 262 + y);
	glVertex2f(478 + x, 222 + y);
	glVertex2f(70 + x, 238 + y);
	glEnd();




	/*p2*/
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	//	glBegin(GL_LINE_LOOP);
	glVertex2f(90 + x, 258 + y);
	glVertex2f(90 + x, 280 + y);
	glVertex2f(466 + x, 298 + y);
	glVertex2f(466 + x, 262 + y);
	//glVertex2f(90+x,258+y);
	glEnd();


	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINE_LOOP);

	glVertex2f(90 + x, 258 + y);
	glVertex2f(90 + x, 280 + y);
	glVertex2f(466 + x, 298 + y);
	glVertex2f(466 + x, 262 + y);
	glVertex2f(90 + x, 258 + y);
	glEnd();



	/*p3*/

	glColor3f(0.30, 0.30, 0.30);
	glBegin(GL_POLYGON);

	glVertex2f(102 + x, 302 + y);
	glVertex2f(102 + x, 280 + y);
	glVertex2f(442 + x, 298 + y);
	glVertex2f(442 + x, 330 + y);
	glVertex2f(102 + x, 302 + y);

	glEnd();







	/*p4*/
	glColor3f(1.0, 0.50, 0.00);
	glBegin(GL_POLYGON);

	glVertex2f(158 + x, 304 + y);
	glVertex2f(158 + x, 388 + y);
	glColor3f(0.3, 0.3, 0.0);
	glVertex2f(188 + x, 388 + y);
	glVertex2f(188 + x, 310 + y);

	glEnd();




	glBegin(GL_POLYGON);
	glColor3f(0.4, 0.4, 0.4);
	glVertex2f(442 + x, 328 + y);
	glVertex2f(442 + x, 298 + y);
	glVertex2f(494 + x, 294 + y);
	glVertex2f(494 + x, 324 + y);
	//glVertex2f(318+x,322+y);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.80, 0.80, 0.80);
	glVertex2f(466 + x, 298 + y);
	glVertex2f(466 + x, 262 + y);
	glVertex2f(508 + x, 256 + y);
	glVertex2f(508 + x, 290 + y);
	//glVertex2f(318+x,322+y);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.4, 0.4, 0.4);
	glVertex2f(478 + x, 262 + y);
	glVertex2f(478 + x, 222 + y);
	glVertex2f(514 + x, 220 + y);
	glVertex2f(514 + x, 254 + y);
	//glVertex2f(318+x,322+y);
	glEnd();


	glColor3f(1.0, 0.50, 0.0);
	glBegin(GL_POLYGON);

	glVertex2f(224 + x, 312 + y);
	glVertex2f(224 + x, 396 + y);
	glColor3f(0.3, 0.3, 0.0);
	glVertex2f(254 + x, 396 + y);
	glVertex2f(254 + x, 315 + y);
	glEnd();

	glColor3f(1.0, 0.50, 0.0);
	glBegin(GL_POLYGON);
	//	glColor3f(0.5,0.5,0.2);
	glVertex2f(318 + x, 322 + y);
	//		glColor3f(0.3,0.1,0.0);
	glVertex2f(318 + x, 406 + y);
	glColor3f(0.5, 0.5, 0.2);
	glVertex2f(358 + x, 406 + y);
	//		glColor3f(0.5,0.2,0.0);
	glVertex2f(358 + x, 320 + y);
	//	glColor3f(0.3,0.3,0.0);

	glEnd();
	//}
}
void water1()
{
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(0, 160);
	glVertex2f(80, 160);
	glVertex2f(480, 100);
	glVertex2f(1024, 100);
	glVertex2f(1024, 0);
	glVertex2f(0, 0);
	glEnd();

}

void water()
{
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(0, 160);
	glVertex2f(80, 160);

	glVertex2f(508, 160);
	glVertex2f(1024, 160);
	glVertex2f(1024, 100);
	glVertex2f(480, 100);
	glVertex2f(80, 160);
	glEnd();

}
void wreakage(int x)
{
	if (x > 202)
	{
		glBegin(GL_POLYGON);
		glColor3f(0.68f, 0.29f, 0.0f);
		glVertex2f(280, 150);
		glVertex2f(300, 170);
		glVertex2f(310, 130);
		glVertex2f(260, 110);
		glEnd();


		glBegin(GL_POLYGON);
		glColor3f(0.68f, 0.29f, 0.0f);
		glVertex2f(600, 150);
		glVertex2f(630, 170);
		glVertex2f(650, 130);
		glVertex2f(600, 110);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.68f, 0.29f, 0.0f);
		glVertex2f(350, 150);
		glVertex2f(380, 170);
		glVertex2f(390, 130);
		glVertex2f(400, 110);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.68f, 0.29f, 0.0f);
		glVertex2f(520, 150);
		glVertex2f(550, 170);
		glVertex2f(570, 130);
		glVertex2f(560, 110);
		glEnd();
		glutPostRedisplay();
	}
}
void Man(int x)
{
	if (x > 202)
	{

		glColor3f(1.0f, 0.0f, 0.0f); //leg


		glBegin(GL_QUADS);
		glVertex2i(x1, y11 - 90);
		glVertex2i(x1 + 10, y11 - 90);
		glVertex2i(x1 + 10, y11 - 60);
		glVertex2i(x1, y11 - 60);
		glEnd();
		//glFlush();

		glColor3f(1.0f, 1.0f, 0.0f); //shorts
		glBegin(GL_QUADS);
		glVertex2i(x1 - 10, y11 - 60);
		glVertex2i(x1 + 10, y11 - 60);
		glVertex2i(x1 + 10, y11 - 30);
		glVertex2i(x1 - 10, y11 - 30);
		glEnd();

		glColor3f(1.5f, 0.5f, 0.0f);    //shoe
		glBegin(GL_QUADS);
		glVertex2i(x1 - 10, y11 - 100);
		glVertex2i(x1 + 10, y11 - 100);
		glVertex2i(x1 + 10, y11 - 90);
		glVertex2i(x1 - 10, y11 - 90);
		glEnd();

		glColor3f(1.0f, 0.0f, 0.0f); //body
		glBegin(GL_QUADS);
		glVertex2i(x1 - 10, y11 - 30);
		glVertex2i(x1 + 10, y11 - 30);
		glVertex2i(x1 + 10, y11 - 10);
		glVertex2i(x1 - 10, y11 - 10);
		glEnd();

		glColor3f(1.0f, 0.0f, 0.0f); //body
		glBegin(GL_QUADS);
		glVertex2i(x1 - 10, y11 - 10);
		glVertex2i(x1 + 10, y11 - 10);
		glVertex2i(x1 + 10, y11);
		glVertex2i(x1, y11);
		glEnd();

		glColor3f(1.0f, 0.3f, 0.5f); //hand
		glBegin(GL_QUADS);
		glVertex2i(x1, y11 - 30);
		glVertex2i(x1 + 10, y11 - 30);
		glVertex2i(x1 + 10, y11 - 10);
		glVertex2i(x1, y11 - 10);
		glEnd();

		glColor3f(1.0f, 0.3f, 0.5f); //hand
		glBegin(GL_QUADS);
		glVertex2i(x1, y11 - 40);
		glVertex2i(x1 + 10, y11 - 40);
		glVertex2i(x1 + 10, y11 - 20);
		glVertex2i(x1, y11 - 20);
		glEnd();

		/*glColor3f(1.0f,0.3f,0.5f); //hand
		 glBegin(GL_QUADS);
		  glVertex2i(x1-2,y11-40);
		  glVertex2i(x1,y11-140);
		  glVertex2i(x1,y11-30);
		  glVertex2i(x1-2,y11-30);
		glEnd();*/

		glColor3f(1.0f, 0.3f, 0.5f); //neck
		glBegin(GL_QUADS);
		glVertex2i(x1, y11);
		glVertex2i(x1 + 10, y11);
		glVertex2i(x1 + 10, y11 + 5);
		glVertex2i(x1, y11 + 5);
		glEnd();

		glColor3f(0.2f, 0.8f, 0.1f); //head hair
		glBegin(GL_QUADS);
		glVertex2i(x1 + 3, y11 + 5);
		glVertex2i(x1 + 10, y11 + 5);
		glVertex2i(x1 + 12, y11 + 30);
		glVertex2i(x1 + 3, y11 + 30);
		glEnd();

		glColor3f(0.2f, 0.8f, 0.1f); //head hair
		glBegin(GL_QUADS);
		glVertex2i(x1 - 4, y11 + 30);
		glVertex2i(x1 + 10, y11 + 30);
		glVertex2i(x1 + 10, y11 + 34);
		glVertex2i(x1 - 4, y11 + 34);
		glEnd();


		glColor3f(1.0f, 0.3f, 0.5f); //face
		glBegin(GL_QUADS);
		glVertex2i(x1 - 4, y11 + 5);
		glVertex2i(x1 + 3, y11 + 5);
		glVertex2i(x1 + 3, y11 + 32);
		glVertex2i(x1 - 4, y11 + 32);
		glEnd();
	}
}
void display2(void)
{

	glClear(GL_COLOR_BUFFER_BIT);

	if (ani == 1)
	{
		if (pos < 210)
			pos += 0.09;

		if ((600 + pos) > 800)
		{

			if (y > -300)
				y -= 0.09;

		}
		if (j > -250)
		{
			j -= 0.04;
		}

		/*if (k < 710)
		{
			k += 1;
		}*/




		//reappering of ship
		
		if (y < -290)
		{
			if (rep < 1024)
			{
				rep += 0.09;
			}
		}
		
		//glFlush();
		glutSolidSphere(1.0, 20, 16);

		water();
		wreakage(pos);
		glPushMatrix();
		glTranslatef(410.0, 490.0, 0.0);
		glRotatef(-90, 0.0, 0.0, 1.0);
		Man(pos);
		glPopMatrix();

		ship(pos, y);
		iceberg(pos, j);
		ship(rep, 0);
		water1();

		glutPostRedisplay();
		glFlush();


		glutSwapBuffers();
	}
}

void display1(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_LOOP);
	glColor3f(1, 1, 1);
	glVertex2f(30, 30);
	glVertex2f(994, 30);
	glVertex2f(994, 738);
	glVertex2f(30, 738);
	glEnd();
	glColor3f(1, 1, 1);
	bitmap_output(128, 630, "CAMBRIDGE INSTITUTE OF TECHNOLOGY", GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1, 1, 1);
	bitmap_output(138, 590, "DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING", GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1, 0, 1);
	bitmap_output(350, 530, "A Mini Project On", GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0.5, 0.8, 0);
	bitmap_output(350, 480, "Ship Sinking", GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1, 0, 1);
	bitmap_output(100, 420, "By", GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1, 0, 0);
	bitmap_output(100, 370, "Name: Nithyashree R USN:1CD19CS111 ", GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1, 0, 0);
	bitmap_output(100, 330, "Name:Parijatha G S USN:1CD19CS116", GLUT_BITMAP_TIMES_ROMAN_24);

	glColor3f(1, 0, 1);
	bitmap_output(350, 240, "Guides", GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1, 0, 0);
	bitmap_output(120, 200, "Name: Prof. Priyadarshini M", GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1, 0, 0);
	bitmap_output(120, 160, "Name: Prof. Rajesh Kumar S", GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1, 0, 0);

	/*glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex2f(557, 110);
	glVertex2f(557, 80);
	glVertex2f(627, 80);
	glVertex2f(627, 110);
	glEnd();
	glFlush();
	glColor3f(0, 0, 0);
	bitmap_output(567, 90, "Next", GLUT_BITMAP_TIMES_ROMAN_24);
	glEnd();
	*/
	glFlush();
	glutSwapBuffers();

}






void myKeyboardFunc(unsigned char key, int x, int y)
{
	if (key == 'e')
		exit(0);
	if (key == 'f')
		glutFullScreen();
	if (key == 32) {
		if (ani == 0)
			ani = 1;
		else
			ani = 0;
	}
	if (key == 13)
		flag = 1;
	//break;
	display2();




}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	if (flag == 0)
		display1();

	else if (flag == 1)

		display2();

}
/*void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if (w <= h)
		glOrtho(-1.5, 1.5, -1.5 * (GLfloat)h / (GLfloat)w,
			1.5 * (GLfloat)h / (GLfloat)w, -10.0, 10.0);
	else
		glOrtho(-1.5 * (GLfloat)w / (GLfloat)h,
			1.5 * (GLfloat)w / (GLfloat)h, -1.5, 1.5, -10.0, 10.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
*/
void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1024, 768);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Ship and Iceberg Collision");

	glutKeyboardFunc(myKeyboardFunc);
	glutMouseFunc(myMouse1);
	init();
	glutSwapBuffers();
	glutDisplayFunc(display);
	//glutReshapeFunc(reshape);
	glEnable(GL_SMOOTH);
	init();
	glutMainLoop();

}
