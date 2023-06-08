#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <conio.h>
#include "funcoes.h"


/* 1)    Fa?a um programa em C que apresente as seguintes op??es no MENU PRINCIPAL:
 MENU PRINCIPAL
 1 - Cadastrar alunos
 2 - Consultar dados dos alunos
 3 - Sair
 
 * Quando a op??o escolhida for Cadastrar alunos, o programa dever? cadastrar os seguintes dados: nome, matr?cula, idade, sexo, nota de A1, nota de A2 e frequ?ncia
 [n? de aulas].
 
 -> A cada aluno cadastrado, voc? dever? perguntar se deseja cadastrar outro aluno, caso negativo, retornar ao menu principal.
 Cadastrar no m?ximo 5 alunos !
 * Quando a op??o escolhida for Consultar dados dos alunos, o programa dever? oferecer outro menu:
 1 - Consultar aluno pelo n?mero da matr?cula
 2 - Consultar aluno pelo nome
 3 - Retornar ao menu principal
 -> Caso encontre, mostrar todos os dados do aluno, caso negativo, informar que ele n?o foi cadastrado.ok
 "    Voc? dever? criar as seguintes fun??es no programa acima:
 1.    Para verificar se o sexo lido ? M ou F;
 2.    Para calcular e retornar a m?dia das notas lidas;
 3.    Para verificar se o aluno foi aprovado ou reprovado. Para ser aprovado o aluno deve ter m?dia final >= 6.0 e freq??ncia >= 60 aulas; Ap?s o c?lculo, escrever a resposta.
 4.    Para verificar qual a maior m?dia dos alunos cadastrados;
 5.    Para calcular o percentual de alunos reprovados;
 6.    Uma fun??o para escrever os dados calculados nos ?tens 4 e 5.
 
 A op??o Sair ? a ?nica que permite sair do programa. Antes de sair do programa, voc? dever? chamar a fun??o criada no item 6.
 */

struct lista_aluno{
    char nome[50], sexo;
    int idade, matricula;
    float n1, n2, frequencia;
}aluno[5];

void sexo(char sexo);
void media(float n1, float n2);
void aprovado (float n1, float n2, int frequencia);
void maiorMedia(float n1, float n2);
void reprovado(float cnt, float n1, float n2, int frequencia);
void imprimir();

int main(void) {
    
    int menu=0, i=0, continua = -1, r, consulta, comparar;
    char sConsulta[50];
    float cnt=0;
    
    do{
        
        printf("MENU PRINCIPAL \n Digite: \n 1 - Cadastrar alunos \n 2 - Consultar dados dos alunos \n 3 - Sair \n ");
        scanf("%d", &menu);
        
        if(menu == 1){
            
            do{
                printf("Digite o nome do aluno: ");
                scanf(" %[^\n]s", &aluno[i].nome);
                printf("Digite a matricula do aluno: ");
                scanf("%d", &aluno[i].matricula);
                printf("Digite a idade do aluno: ");
                scanf("%d", &aluno[i].idade);
                printf("Digite o sexo do aluno: ");
                scanf(" %c", &aluno[i].sexo);
                printf("Digite a N1 do aluno: ");
                scanf("%f", &aluno[i].n1);
                printf("Digite a N2 do aluno: ");
                scanf("%f", &aluno[i].n2);
                maiorMedia(aluno[i].n1, aluno[i].n2);
                printf("Digite a frequencia do aluno: ");
                scanf("%f", &aluno[i].frequencia);
                system("cls");
                cnt++;
                reprovado(cnt, aluno[i].n1, aluno[i].n2, aluno[i].frequencia);
                printf("0 - Retornar ao menu principal \n 1- Cadastra novo aluno \n");
                scanf("%d", &continua);
                system("cls");
            }while((cnt<5 && continua != 0));
            
        }
        if(menu == 2 ){
            do {
                
                printf("0 - Retornar ao menu principal \n 1 - Consultar aluno pelo numero da matricula \n 2 - Consultar aluno pelo nome \n ");
                scanf("%d", &continua);
                system("cls");
                
                if(continua == 1 ){
                    printf("Digite o numero da matricula do aluno que deseja consultar: ");
                    scanf("%d", &consulta );
                    if ( consulta == aluno[i].matricula){
                        printf("Nome do aluno: %s \n ", aluno[i].nome);
                        printf("Matricula do aluno: %d \n", aluno[i].matricula);
                        printf("Idade: %d \n", aluno[i].idade);
                        sexo(aluno[i].sexo);
                        printf("N1: %.2f \n", aluno[i].n1);
                        printf("N2: %.2f \n", aluno[i].n2);
                        printf("Frequencia %.2f \n", aluno[i].frequencia);
                        media(aluno[i].n1, aluno[i].n2);
                        
                        printf("0 - Retornar ao menu principal \n 1- consultar novo aluno \n");
                        scanf("%d", &continua);
                        system("cls");
                        
                    }else{
                        printf("Aluno nao cadastrado \n");
                        printf("0 - Retornar ao menu principal \n 1- Consultar novo aluno \n");
                        scanf("%d", &continua);
                        system("cls");
                    }
                }
                if (continua == 2){
                    printf("Digite o nome do aluno que deseja consultar: ");
                    scanf(" %[^\n]s", &sConsulta);
                    comparar = strcmp(sConsulta, aluno[i].nome);
                    
                    if(comparar == 0){
                        printf("Nome do aluno: %s \n ", aluno[i].nome);
                        printf("Matricula do aluno: %d \n", aluno[i].matricula);
                        printf("Idade: %d \n", aluno[i].idade);
                        sexo(aluno[i].sexo);
                        printf("N1: %.2f", aluno[i].n1);
                        printf("N2: %.2f", aluno[i].n2);
                        printf("Frequencia %.2f \n", aluno[i].frequencia);
                    }else{
                        printf("Aluno nao cadastrado \n");
                        printf("0 - Retornar ao menu principal \n 1- Consultar novo aluno \n");
                        scanf("%d", &continua);
                        system("cls");
                    }
                }
            }while(continua != 0);
        }
        
        if (menu == 3){
            
            imprimir();
            
            break;
        }
        
    }while (continua == 0);
}




