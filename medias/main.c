#include <stdio.h>
#include <stdlib.h>

/* 
4. Elabore um programa que receba omo dados de entrada duas notas de vários alunos e ao final mostra:
a) A quantidade de alunos com media maior ou igual a 7,0;
b) A Menor media da Turma;
c) A Media geral da turma;
d) Quantas vezes o programa rodou;
Observação: O programa deve finalizar quando for digitado o valor 0 (zero) e utilizar no máximo 6 variáveis não utilizar vetores ou matrizes.
*/

   main() {
	float n1=1, n2, media= 0, qnt=0, acimaMedia=0, menor=99999, somaMedia=0;
	
	while(n1!=0){
		printf("Digite a primeira nota do aluno, caso queira parar a aplicação digite 0: \n");
		scanf("%f",&n1);
		if(n1>0){
			printf("Digite a segunda nota: \n");
			scanf("%f",&n2);
			qnt++;
			
			media = (n1+n2)/2;
			somaMedia+=media;
			if(menor>media){
				menor=media;
			}if(media>=7){
			acimaMedia++;
		}
		}	
		
	}
      
    printf("A quantidade de alunos com media maior ou igual a 7,0: %.f \n", acimaMedia);
    printf("A Menor media da Turma: %.2f \n", menor);
    printf("O programa rodou %.f vezes \n",qnt);
   	printf("Media geral da turma: %.2f \n", somaMedia/qnt);

	
}
