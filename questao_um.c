#include <stdio.h>
//1. Escreva um programa de controle de senha que dê três chances de acerto ao usuário;
//se ele não conseguir, o programa deve avisar que o cartão foi bloqueado.

int main() {
    int senha, senhaCorreta;
    int count = 0;
    
    printf("Crie sua senha: \n");
    scanf("%d", &senhaCorreta);
    
    do{
        printf("Digite sua senha: \n");
        scanf("%d", &senha);
        count++;
        
        if(senha == senhaCorreta){
            printf("Senha correta!\n ");
            count = 3;
        } else{
            if(count == 3){
                printf("Senha incorreta, cartão bloqueado! \n");
            }
        }
       
    }while(count<3);

    return 0;
}

