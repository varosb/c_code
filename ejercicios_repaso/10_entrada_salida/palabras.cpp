#include <stdio.h>
#include <stdlib.h>

int main(){

	char palabras[100];
	char palabra1[50], palabra2[50];

	printf("Dime una palabra:");
	scanf(" %s", palabra1);
	printf("Dime otra palabra:");
	scanf(" %s", palabra2);

	sprintf(palabras, "%s %s", palabra1, palabra2);
	printf("Has escrito: %s.\n", palabras);


    return EXIT_SUCCESS;
}
