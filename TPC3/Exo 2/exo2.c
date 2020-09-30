#include <stdio.h>
#include <stdlib.h>

int main() {
	int n = 2868838400;
	int i = 1;
	
	printf("Le nombre d'octets necessaire est %d\n", sizeof(n));
	printf("Le nombre de bits necessaire est %d\n", sizeof(n) * 8);

	for (i = 1; i <= sizeof(n) * 8; i++) {
		if ((n & 1) == 1) {  //on compare le lsb de n avec 1
			printf("bit %d : ON\n", i);  //si le lsb est égal à 1 on print ON
		}
		else {
			printf("bit %d : OFF\n", i); //sinon on print OFF
		}
		//on décale à droite une fois à chaque passage pour actualiser le lsb
		n = n >> 1;


		
	}
	printf("Bye see you soon !");




}