//Programa que realiza a contagem de 1 até 100 e nos múltiplos de 5 imprima apenas M5, múltiplos de 10 imprima apenas M10 e múltiplos de 15 imprima apenas M15 e caso não seja múltiplo de nenhum deles imprima o valor atual da variável.

#include <stdio.h>

int main() {
    int x=0;
    for(x=1;x<=100;x++){
        if(x%15==0){
            printf("M15\n");
        }else{
            if(x%10==0){
                printf("M10\n");
            }else{
                if(x%5==0){
                    printf("M5\n");
                }else{
                    printf("%d\n",x);
                }
            }
        }
    }
    return 0;
}
