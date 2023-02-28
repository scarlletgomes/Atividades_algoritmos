#include <stdio.h>
//4. Escreva um programa que calcule a média dos números digitados pelo usuário, se
//eles forem pares. O programa deve terminar a leitura se o usuário digitar zero.

int main() {

    int num1 = 0, num2 = 0, num3 = 0, media = 0, parar = 0;
    
    do{
        printf("Escreva um número: ");
        scanf("%d", &num1);
        if(num1 == 0){
            break;
        }
        printf("Escreva um número: ");
        scanf("%d", &num2);
        if(num2 == 0){
            break;
        }
        printf("Escreva um número: ");
        scanf("%d", &num3);
        if(num3 == 0){
            break;
        }
        if(num1 %2==0 && num2 %2==0 && num3 %2==0){
            media = (num1 + num2 + num3)/3;
            printf("A média dos números pares é: %d\n", media);
        }else{
            printf("Números não são pares\n");
        }
    }while(parar == 0);
    
    return 0;
}
