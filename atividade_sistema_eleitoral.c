// Programa que visa mostrar obrigatoriedade ou não para votar, de 0 a 16 anos não vota, de 16 a 18 é opcional, de 18 a 65 obrigatório e votando com 41 ou 88 anos ganha prêmio ao votar

#include <stdio.h>

int main() {
    int idade = 0;
    
    printf("Digite a Idade: ");
    scanf("%d", &idade);
    
    if(idade<0){
        printf("Não nasceu\n");
    }else{
        if(idade<16){
            printf("Não vota\n");
        }else{
            if(idade<18){
                printf("Voto opcional\n");
            }else{
                if(idade<65){
                    if(idade==41){
                        printf("Não vota e ganha prêmio\n");
                    }else{
                        printf("Obrigatório\n");
                    }
                }else{
                    if(idade==88){
                        printf("Não vota e ganha prêmio\n");
                    }else{
                        printf("Opcional\n");
                    }
                }
            }
           
        }
    }
    return 0;
}
