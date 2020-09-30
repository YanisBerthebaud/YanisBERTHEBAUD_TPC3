#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include<locale.h>
#include <math.h>
#define NBMAXNOTES 30
#define carre(x) (x) * (x) 
int main() {
	float note[NBMAXNOTES];
	float numerateur = 0;
	int denominateur = 0;
	float moyenne = 0;
	int i = 1;
	char question = 'A';
	int nbA = 0;
	float petite = 20;
	float grande = 0;

	for (int k = 1; k <= NBMAXNOTES; k++) {
		note[k - 1] = -2;
	}

	while ((i <= 30) && (question != 'O')) {

		printf("entrez la note no %d\n", i);
		scanf_s("%f", &note[i-1]);
		if ((note[i-1] <= 20) && (note[i-1] >= 0)) {
			
			numerateur += note[i - 1];
			denominateur++;
			
			if (note[i - 1] < petite) {
				petite = note[i - 1];
			}
			if (note[i - 1] > grande) {
				grande = note[i - 1];
			}
			i++;
		}

		else {
			printf("Eleve absent ? ou voulez-vous arreter la saisie des notes ? A/O/N\n");
			question = _getch(); //permet de lire la lettre qu'on va mettre
			question = toupper(question);
			switch (question) {

			case 'A':
				nbA++;
				note[i - 1] = -1;
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
	float et = 0;
	float somme = 0;
	for (int j = 0; j < NBMAXNOTES; j++) {
		if ((note[j] != -1) && (note[j] != -2)) {
			somme += carre(note[j] - moyenne);

		}
		et = (float)sqrt((1 / (i - nbA - 1)) * somme);
	}
	printf("la moyenne est de classe est de %f ", moyenne);
	printf("il y a %d note valides, il y a %d absence, la plus petite note est %f, la plus grande note est %f et l'écart type est %f\n", i - 1 - nbA, nbA, petite, grande, et);
}