#include <stdio.h>
#include <stdlib.h>

/* 3 . Elabore um programa que faça o sorteio de vários números e ao final mostra:
a) A quantidade de números sorteados; ok
b) O Maior numero sorteado;
c) Quantos números pares foram sorteados;
Observação: O programa deve finalizar quando for sorteado o valor 0 (zero)e utilizar no
máximo 3 variáveis não utilizar vetores ou matrizes. */

 int main(void) {
	int i=1, cont=0, maior=0, pares=0;
	
	while(i != 0){
		i=rand ()%100;
		printf("%d ", i );
		sleep(1);
		cont++;
		
		if(i>maior){
			maior=i;
		}
		if (i %2==0){
			pares++;
		}
	}
	
	printf("A quantidade de numeros sorteados foi: %d\n", cont);
	printf("O maior numero sorteado foi: %d\n", maior);
	printf("A quantidade de numeros pares foram: %d\n", pares);

	
	return 0;
}
