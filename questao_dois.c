#include <stdio.h>
//Escreva um programa que leia cinco valores e conte quantos desses valores são
//negativos, mostrando essa informação no final.

int main() {

    int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, count = 0;
    
    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite um número: ");
    scanf("%d", &num2);
    printf("Digite um número: ");
    scanf("%d", &num3);
    printf("Digite um número: ");
    scanf("%d", &num4);
    printf("Digite um número: ");
    scanf("%d", &num5);
    
    if(num1<0){
        count ++;
    }
    if(num2<0){
        count ++;
    }
    if(num3<0){
        count ++;
    }
    if(num4<0){
        count ++;
    }
    if(num5<0){
        count ++;
    }
    printf("A quantidade de números negativoe é de %d\n", count);
    return 0;
}
