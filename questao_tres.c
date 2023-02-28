#include <stdio.h>
//3. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados
//sobre o salário e número de filhos. A prefeitura deseja saber:
//a) média do salário da população;
//b) média do número de filhos;
//c) maior salário;
//d) percentual de pessoas com salário até R$ 100,00. O final da leitura de dados se
//dará com a entrada de um salário negativo.

int main() {

    int parar = 0;
    float count = 0, salario1 = 0, salario2 = 0, salario3 = 0, mediaSalario = 0, filho1 = 0, filho2 = 0, filho3 = 0, mediaFilho = 0, porcentagem = 0;
    
    do{
        printf("Digite o salário do habitante: ");
        scanf("%f", &salario1);
        if(salario1<=0){
            break;
        }
        printf("Digite quantos filhos o habitante tem: ");
        scanf("%f", &filho1);
        
        printf("Digite o salário do habitante: ");
        scanf("%f", &salario2);
        if(salario2<=0){
            break;
        }
        printf("Digite quantos filhos o habitante tem: ");
        scanf("%f", &filho2);
        
        printf("Digite o salário do habitante: ");
        scanf("%f", &salario3);
        if(salario3<=0){
            break;
        }
        printf("Digite quantos filhos o habitante tem: ");
        scanf("%f", &filho3);
        
        mediaSalario = (salario1 + salario2 + salario3)/3;
        printf("A média salarial da população é de: R$%.2f \n", mediaSalario);
        
        mediaFilho = (filho1 + filho2 + filho3)/3;
        printf("A média de filhos por habitante é de: %.2f \n", mediaFilho);

        if(salario1 > salario2 && salario1 > salario3){
            printf("O maior salário é de R$%.2f\n", salario1);
        }
        if(salario2 > salario1 && salario2 > salario3){
            printf("O maior salário é de R$%.2f\n", salario2);
        }else{
            printf("O maior salário é de R$%.2f\n", salario3);
        }
        
        if(salario1<=100){
            count++;
        }
        if(salario2<=100){
            count++;
        }
        if(salario3<=100){
            count++;
        }
    
        porcentagem = count/3*100;
        printf("Percentual de pessoas com salário até R$ 100,00 %.2f %%\n", porcentagem);
        
    }while(parar == 0);
    return 0;
}
