/*	Para verificar se o sexo lido ? M ou F; ok
2.	Para calcular e retornar a m?dia das notas lidas ok;
3.	Para verificar se o aluno foi aprovado ou reprovado. Para ser aprovado o aluno deve ter m?dia final >= 6.0 e freq??ncia >= 60 aulas; Ap?s o c?lculo, escrever a resposta.ok
4.	Para verificar qual a maior m?dia dos alunos cadastrados; ok
5.	Para calcular o percentual de alunos reprovados;
6.	Uma fun??o para escrever os dados calculados nos ?tens 4 e 5. */

struct {
	float nota1, nota2;
}dados[5];
float maior, aMedia, reprovou;

void sexo(char sexo){
	if(sexo == 'M'){
		printf("Sexo masculino");
	}else if( sexo == 'f' || sexo == 'F'){
		printf("Sexo Feminino");
	}
}

void media(float n1, float n2){
	float media;
	media = (n1 + n2) /2;	
	printf("Media %.2f \n", media);
}

void aprovado (float n1, float n2, int frequencia ){
	float media;
	media = (n1 + n2) /2;	
		if(media >= 6 && frequencia >= 60){
		printf("Aprovado \n");
	}else {
		printf("Reprovado \n");
	}
	
}

void maiorMedia(float n1, float n2){
	aMedia = (n1 + n2)/2;
	if(maior < aMedia){
		maior = aMedia;
	}
}

void reprovado(float cnt, float n1, float n2, int frequencia){
	float r=0;
	float media;
	media = (n1 + n2) /2;
	if(media <= 6 || frequencia <= 60){
		r++;
	}
	reprovou = (r*100)/cnt;
}
 
 void imprimir(){
 	printf("A pocentagem de reprovados foi de %.2f \n", reprovado);
 	printf("A maior media foi %.2f \n", maior);
 }



