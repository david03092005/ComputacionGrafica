#include "Elementos.h"

void Elementos :: DibujarElementos(float x, float y, float z) {
    glPushMatrix();

        glPushMatrix();
            glRotatef(-30, 0, 0, 1);
            glTranslatef(-3, 0, 0);
            glutSolidCube(1);
        glPopMatrix();

        glPushMatrix();
            glTranslatef(0, 3, 0);
            glBegin(GL_TRIANGLES);
                glVertex3f(1, 0, 0);
                glVertex3f(0, 1, 0);
                glVertex3f(-1, 0, 0);
            glEnd();
        glPopMatrix();

        glPushMatrix();
            glTranslatef(3, 3, 0);
            glRotatef(45, 1, 1, 0);
            glutSolidCube(1);
        glPopMatrix();

    /*
        glTranslatef(x, y, z);
        glPushMatrix();
        glTranslatef(x+1.5, y+0.0, z+0.0);
        glRotatef(45, 0, 0, 1);
        glutSolidCube(0.5);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(x-1.5, y+0, z+0);
        glutSolidSphere(0.2, 10, 10);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(x+0, y+2, z+0);
        glRotatef(90, 1, 0, 0);
        glutSolidCone(1, 1, 20, 20);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(x+0, y-2, z+0);
        glBegin(GL_TRIANGLES);
        glVertex3f(1, 0, 0);
        glVertex3f(0, 1, 0);
        glVertex3f(-1, 0, 0);
        glEnd();
        glPopMatrix();
    */
    glPopMatrix();
}