#include <stdio.h>
//6. Escreva um programa que receba dez números inteiros do teclado e diga quantos são
//pares e quantos são ímpares.

int main() {

    int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0, num7 = 0, num8 = 0, num9 = 0, num10 =  0, count = 0, countI = 0;
    
    printf("Escreva um número: ");
    scanf("%d", &num1);
    printf("Escreva um número: ");
    scanf("%d", &num2);
    printf("Escreva um número: ");
    scanf("%d", &num3);
    printf("Escreva um número: ");
    scanf("%d", &num4);
    printf("Escreva um número: ");
    scanf("%d", &num5);
    printf("Escreva um número: ");
    scanf("%d", &num6);
    printf("Escreva um número: ");
    scanf("%d", &num7);
    printf("Escreva um número: ");
    scanf("%d", &num8);
    printf("Escreva um número: ");
    scanf("%d", &num9);
    printf("Escreva um número: ");
    scanf("%d", &num10);
    
    if(num1 %2==0){
        count ++;
    }else{
        countI ++;
    }if(num2 %2==0){
        count ++;
    }else{
        countI ++;
    }if(num3 %2==0){
        count ++;
    }else{
        countI ++;
    }if(num4 %2==0){
        count ++;
    }else{
        countI ++;
    }if(num5 %2==0){
        count ++;
    }else{
        countI ++;
    }if(num6 %2==0){
        count ++;
    }else{
        countI ++;
    }if(num7 %2==0){
        count ++;
    }else{
        countI ++;
    }if(num8 %2==0){
        count ++;
    }else{
        countI ++;
    }if(num9 %2==0){
        count ++;
    }else{
        countI ++;
    }if(num10 %2==0){
        count ++;
    }else{
        countI ++;
    }
    
    printf("Você digitou %d numeros pares e %d números impares\n", count, countI);
    
    
    return 0;
}
