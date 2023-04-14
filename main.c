#include <stdio.h>

//3. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados
//sobre o salário e número de filhos. A prefeitura deseja saber:
//a) média do salário da população;ok
//b) média do número de filhos;ok
//c) maior salário;ok
//d) percentual de pessoas com salário até R$ 100,00. O final da leitura de dados se
//dará com a entrada de um salário negativo.

int main(){
    float salario=1, maior=0, somaSalario=0, habitantesMenorSalario=0, porcentagemCem=0, filhos=0, totalHabitantes=0, totalFilhos=0, habitantesCem=0, mediaSalarial=0;
    
    
    while(salario>0){
        //entrada de dados
        printf("Digite o salario ou digite um valor negativo para interromper a aplicacao: \n");
        scanf("%f", &salario);
        
        //interrompe se o salario for negativo
        if (salario >=0){
            somaSalario = salario + somaSalario;
            printf("Digite o numero de filhos: \n");
            scanf("%f", &filhos);
            totalFilhos = filhos + totalFilhos;
            totalHabitantes ++;
            mediaSalarial+=salario;
            if(salario<=100){
                habitantesCem++;
                porcentagemCem = (habitantesCem*100);
            }
        }
        //guadando salario maior
        if (salario > maior){
            maior = salario;
        }
    }
      
    printf("A media do salario da populacao e R$%.2f\n", mediaSalarial/totalHabitantes);
    printf("A media do numero de filhos e de %.2f por habitante\n", totalFilhos / totalHabitantes);
    printf("O maior salario e de R$%.2f\n", maior);
    printf("O percentual de pessoas com salario ate R$100,00 e de %.2f%%\n", porcentagemCem/totalHabitantes);
}
