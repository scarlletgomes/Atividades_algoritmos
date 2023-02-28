#include <stdio.h>

//Atividade para criacao de formulario com dados incluidos pelo usuario 

int main() {
    int idade = 0, numero = 0;
    char nome[50], sexo, altura[4], endereco[50], cpf[20], dataNascimento[11];
   
        printf("Informe o nome: ");
        scanf(" %[^\n]s", nome);
    
        printf("Informe a idade: ");
        scanf("%d", &idade);

        printf("Informe o sexo: ");
        scanf("%c", &sexo);
    
        printf("Informe a altura: ");
        scanf("%s", altura);

        printf("Informe o endereco: ");
        scanf(" %[^\n]s", endereco);
    
        printf("Informe o número: ");
        scanf("%d", &numero);
    
        printf("Informe o CPF: ");
        scanf("%s", cpf);
    
        printf("Informe a Data de Nascimento: ");
        scanf("%s", dataNascimento);

        printf("Nome: %s\n", nome);
        printf("Idade: %d\n", idade);
        printf("Genero: %c\n", sexo);
        printf("Altura: %s\n", altura);
        printf("Endereço: %s\n", endereco);
        printf("Número (endereço): %d\n", numero);
        printf("CPF: %s\n", cpf);
        printf("Data de Nascimento: %s\n", dataNascimento);
    
        return 0;
}
