#include <windows.h>
#include <GL/glut.h>
#include <math.h>

void circle(float radius, float cX, float cY, float r, float g, float b)
{
   glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
        {
            glColor3f(r,g,b);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);
        }
}

void display() {
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);
glOrtho(-30,30,-30,30,-30,30);

//House
//center
glBegin(GL_QUADS);
glColor3f(1.0f,0.0f,0.2f);
glVertex2f(-7.0f,-10.0f);
glVertex2f(-7.0f,10.0f);
glVertex2f(8.0f,10.0f);
glVertex2f(8.0f,-10.0f);
glEnd();

//top
glBegin(GL_QUADS);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-7.0f,10.0f);
glVertex2f(-7.0f,11.0f);
glVertex2f(8.0f,11.0f);
glVertex2f(8.0f,10.0f);
glEnd();

//left line
glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-2.0f, 10.0f);    // x, y
glVertex2f(-2.0f, -10.0f);    // x, y
glEnd();

//middle line
glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(3.0f, 10.0f);    // x, y
glVertex2f(3.0f, -10.0f);    // x, y
glEnd();

//roof**
glBegin(GL_QUADS);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-1.0f,10.0f);
glVertex2f(-1.0f, 12.5f);
glVertex2f(6.0f, 12.5f);
glVertex2f(6.0f,10.0f);
glEnd();

//left 5th window
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(-5.5f,7.0f);
glVertex2f(-5.5f,9.0f);
glVertex2f(-3.0f,9.0f);
glVertex2f(-3.0f,7.0f);
glEnd();

//left 4th window
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(-5.5f,3.0f);
glVertex2f(-5.5f,5.0f);
glVertex2f(-3.0f,5.0f);
glVertex2f(-3.0f,3.0f);
glEnd();

//left 3rd window
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(-5.5f,-1.0f);
glVertex2f(-5.5f,1.0f);
glVertex2f(-3.0f,1.0f);
glVertex2f(-3.0f,-1.0f);
glEnd();

//left 2th window
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(-5.5f,-5.0f);
glVertex2f(-5.5f,-3.0f);
glVertex2f(-3.0f,-3.0f);
glVertex2f(-3.0f,-5.0f);
glEnd();

//left 1st window
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(-5.5f,-8.2f);
glVertex2f(-5.5f,-6.5f);
glVertex2f(-3.0f,-6.5f);
glVertex2f(-3.0f,-8.2f);
glEnd();

//left GF**
glBegin(GL_QUADS);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-7.0f,-10.0f);
glVertex2f(-7.0f,-9.6f);
glVertex2f(-2.0f,-9.6f);
glVertex2f(-2.0f,-10.0f);
glEnd();

//right GF**
glBegin(GL_QUADS);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(3.0f,-10.0f);
glVertex2f(3.0f,-9.6f);
glVertex2f(8.0f,-9.6f);
glVertex2f(8.0f,-10.0f);
glEnd();

//door**
glBegin(GL_QUADS);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-1.5f,-10.0f);
glVertex2f(-1.5f,-7.0f);
glVertex2f(2.5f,-7.0f);
glVertex2f(2.5f,-10.0f);
glEnd();

//middle 5th window
glBegin(GL_QUADS);
glColor3f(1.0f,0.856f,0.024f);
glVertex2f(-0.7f,7.0f);
glVertex2f(-0.7f,9.0f);
glVertex2f(2.0f,9.0f);
glVertex2f(2.0f,7.0f);
glEnd();

//middle 4th window
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(-0.7f,3.0f);
glVertex2f(-0.7f,5.0f);
glVertex2f(2.0f,5.0f);
glVertex2f(2.0f,3.0f);
glEnd();

//middle 3rd window
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(-0.7f,-1.0f);
glVertex2f(-0.7f,1.0f);
glVertex2f(2.0f,1.0f);
glVertex2f(2.0f,-1.0f);
glEnd();

//middle 2nd window
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(-0.7f,-4.7f);
glVertex2f(-0.7f,-3.0f);
glVertex2f(2.0f,-3.0f);
glVertex2f(2.0f,-4.7f);
glEnd();

//Right 5th window
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(4.5f,7.0f);
glVertex2f(4.5f,9.0f);
glVertex2f(7.0f,9.0f);
glVertex2f(7.0f,7.0f);
glEnd();

//Right 4th window
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(4.5f,3.0f);
glVertex2f(4.5f,5.0f);
glVertex2f(7.0f,5.0f);
glVertex2f(7.0f,3.0f);
glEnd();

//Right 3rd window
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(4.5f,-1.0f);
glVertex2f(4.5f,1.0f);
glVertex2f(7.0f,1.0f);
glVertex2f(7.0f,-1.0f);
glEnd();

//right 2nd window
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(4.5f,-4.7f);
glVertex2f(4.5f,-3.0f);
glVertex2f(7.0f,-3.0f);
glVertex2f(7.0f,-4.7f);
glEnd();

//right 1st window
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(4.5f,-8.2f);
glVertex2f(4.5f,-6.5f);
glVertex2f(7.0f,-6.5f);
glVertex2f(7.0f,-8.2f);
glEnd();

//tree**
glBegin(GL_QUADS);
glColor3f(0.7f,0.35f,0.1f);
glVertex2f(-15.0f,-9.0f);
glVertex2f(-15.0f,-2.0f);
glVertex2f(-14.0f,-2.0f);
glVertex2f(-14.0f,-9.0f);
glEnd();

circle(2.0,-16.0,-2.7,0.0,1.0,0.2);
glEnd();
circle(3.0,-14.5,-1.5,0.0,1.0,0.2);
glEnd();
circle(2.0,-13.0,-2.7,0.0,1.0,0.2);
glEnd();

//Lamp-post
//last**
glBegin(GL_QUADS);
glColor3f(0.2f,0.15f,0.1f);
glVertex2f(20.5f,-9.0f);
glVertex2f(20.5f,-8.0f);
glVertex2f(22.5f,-8.0f);
glVertex2f(22.5f,-9.0f);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.2f,0.15f,0.1f);
glVertex2f(21.4f, -8.0f);    // x, y
glVertex2f(21.4f, 0.2f);    // x, y
glVertex2f(21.6f, 0.2f);    // x, y
glVertex2f(21.6f, -8.0f);    // x, y
glEnd();

glBegin(GL_QUADS);
glColor3f(0.2f,0.15f,0.1f);
glVertex2f(19.5f, 0.0f);    // x, y
glVertex2f(19.5f, 0.2f);    // x, y
glVertex2f(21.5f, 0.2f);    // x, y
glVertex2f(21.5f, 0.0f);    // x, y
glEnd();

//light
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(19.5f,-0.8f);
glVertex2f(18.5f,0.0f);
glVertex2f(20.5f,0.0f);
glVertex2f(19.5f,-0.8f);
glEnd();

//Bench
//middle
glBegin(GL_QUADS);
glColor3f(0.749f,0.376f,0.024f);
glVertex2f(14.0f,-7.0f);
glVertex2f(14.0f,-5.0f);
glVertex2f(18.0f,-5.0f);
glVertex2f(18.0f,-7.0f);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.749f,0.376f,0.024f);
glVertex2f(16.0f,-8.0f);
glVertex2f(14.0f,-7.0f);
glVertex2f(18.0f,-7.0f);
glVertex2f(20.0f,-8.0f);
glEnd();

//leg
glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(14.0f, -7.0f);    // x, y
glVertex2f(14.0f, -9.0f);    // x, y
glEnd();

glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(16.0f, -8.0f);    // x, y
glVertex2f(16.0f, -9.0f);    // x, y
glEnd();

glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(19.8f, -8.0f);    // x, y
glVertex2f(19.8f, -9.0f);    // x, y
glEnd();

glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(18.3f, -8.0f);    // x, y
glVertex2f(18.3f, -9.0f);    // x, y
glEnd();

glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(14.0f, -7.0f);    // x, y
glVertex2f(16.0f, -8.0f);    // x, y
glEnd();

glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(14.0f, -7.0f);    // x, y
glVertex2f(18.0f, -7.0f);    // x, y
glEnd();

glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(18.0f, -7.0f);    // x, y
glVertex2f(20.0f, -8.0f);    // x, y
glEnd();

glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(14.0f, -7.0f);    // x, y
glVertex2f(14.0f, -5.0f);    // x, y
glEnd();

glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(14.0f, -5.0f);    // x, y
glVertex2f(18.0f, -5.0f);    // x, y
glEnd();

glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(18.0f, -5.0f);    // x, y
glVertex2f(18.0f, -7.0f);    // x, y
glEnd();

glFlush();
}

int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitWindowSize(520, 520);
glutCreateWindow("A Scenario");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}



