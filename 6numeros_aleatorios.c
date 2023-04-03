#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"

//faca um programa que digite na tela 6 numeros inteiros entre 1 e 60 cada um de uma cor 

int main(void) {
	int i;
	
	for(i = 0; i < 7; i ++){
	textcolor(i);
	printf("%d", rand()%61);
	sleep(1);
	//getch();
			
	}
	return 0;
}
