#include "Personaje.h"

void Personaje::DibujarPersonaje(int numSeg, float alfa, float x, float y, float z) {
	glPushMatrix();
		glTranslatef(-1.0, 0.0, 0.0);
		glRotatef((GLfloat)alfa, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0);
		glPushMatrix();
			glScalef(2.0, 0.4, 1.0);
			glutSolidCube(1);
		glPopMatrix();
		for (int i = 1; i+1 < numSeg; i++) {
				glTranslatef(1.0, 0.0, 0.0);
				glRotatef((GLfloat)alfa*i, 0.0, 0.0, 1.0);
				glTranslatef(1.0, 0.0, 0.0);
				glPushMatrix();
					glScalef(2.0, 0.4, 1.0);
					glutSolidCube(1);
				glPopMatrix();
		}
	glPopMatrix();
}