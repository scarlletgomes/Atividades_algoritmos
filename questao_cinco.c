#include <stdio.h>
//5. Escreva um programa que leia três números do teclado e os imprima na tela na ordem
//inversa da entrada.
int main() {
    int num1 = 0, num2 = 0, num3 = 0;
    
    printf("Escreva um número: ");
    scanf("%d", &num1);
    printf("Escreva um número: ");
    scanf("%d", &num2);
    printf("Escreva um número: ");
    scanf("%d", &num3);
    
    printf("A ordem inversa dos números é: %d, %d, %d\n", num3, num2, num1);
    
    
    return 0;
}
