#include <stdio.h>
#include <stdlib.h>

#define carre(x) (x) * (x)  
//il faut ajouter des parenthèse sinon la distribution se fait mal pour Nb+1 par exemple

int main() {
	int Nb = 5;
	printf("%d\n", carre(Nb));
	printf("%d\n", carre(Nb+1));



}
