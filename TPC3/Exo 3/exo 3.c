#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include<locale.h>

int main() {
	float note = 0;
	float numerateur = 0;
	int denominateur = 0;
	float moyenne = 0;
	int i = 1;
	char question = 'A';
	int nbA = 0;
	float petite = 20;
	float grande = 0;
	
	while ((i <= 30) && (question != 'O')) {
		
		printf("entrez la note no %d\n", i);
		scanf_s("%f", &note);
		if ((note <= 20) && (note >= 0)) {
			numerateur += note;
			denominateur++;
			i++;
			if (note < petite) {
				petite = note;
			}
			if (note > grande) {
				grande = note;
			}
		}
		else {
			printf("Eleve absent ? ou voulez-vous arreter la saisie des notes ? A/O/N\n");
			question = _getch(); //permet de lire la lettre qu'on va mettre
			question = toupper(question);
			switch (question) {

			case 'A':
				nbA++;
				i++;
				break;
			case 'N':
				break;
			case 'O':
				break;

			}
		}
		
	}
	moyenne = numerateur / denominateur;
	printf("la moyenne est de classe est de %f ", moyenne);
	printf("il y a %d note valides, il y a %d absence, la plus petite note est %f, la plus grande note est %f\n", i -1 - nbA, nbA, petite, grande);


}