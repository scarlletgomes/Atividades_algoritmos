#include <stdio.h>
#include <stdlib.h>

// faca um programa que receba como nota de entrada 2 notas de varios alunos
//a- qual foi a maior media obtida b-quantos alunos tiveram media maior ou = a sete 

	main() {
		float nota1 = 0, nota2 = 0, media = 0, maior =0;
		int cont, alunos7;
		
		while(cont!=0){
		printf("Digite a primeira nota: ");
		scanf("%f", &nota1);
		printf("Digite a segunda nota: ");
		scanf("%f", &nota2);
			
		media = (nota1 + nota2)/ 2;
			if(media>maior){
				maior=media;
		}if(media>=7){
			alunos7++;
		}
		printf("Digite 1 para continuar, se ja tiver lancado todas as notas digite 0: ");
		scanf("%d", &cont);
		system("cls");
		} 
		printf("A maior media e: %0.2f", maior);
		printf("O total de medias maiores que 7 sao %d", alunos7);	
}
