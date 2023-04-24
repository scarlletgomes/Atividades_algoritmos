#include <stdio.h>
#include <stdlib.h>

/* faca um programa que receba o valor do salario de 5 funcionarios descontando o inss de 11% e mostre como resultado:
a) a lista com os salarios ok e o desconto ok
b) qual foi o maior salário 
c) a media dos descontos ok*/

int main() {
	int cont;
	float salario[5], desconto[5], media, maior;
	
	for(cont=0; cont<5; cont++) {
		printf("Digite o valor do salario: ");
		scanf("%f", &salario[cont]);
		if(salario[cont] > maior){
			maior=salario[cont];	
		}	
		desconto[cont] = salario[cont]*0.11;
	}	
	system("cls");
	
	printf("A lista dos salarios e: \n");
	for(cont=0;cont<5;cont++) {
		printf("\n O salario e %0.2f e o desconto e %0.2f ", salario[cont], desconto[cont]);
	} 
	
	media = (desconto[0]+desconto[1]+desconto[2]+desconto[3]+desconto[4])/5;
	printf("\n A media dos descontos e de: %0.2f ", media);	
	printf("\n O maior salario foi: %0.2f ", maior);	

		
	return 0;
}
