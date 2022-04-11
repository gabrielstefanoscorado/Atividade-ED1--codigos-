#include <stdio.h>
#include <string.h>

int main() {
    char nome[10], sexo[10];
    int idade;
    
    printf("\n Digite o seu nome:");
    scanf("%s",nome);
    printf("\n Digite o sexo F OU M:");
    scanf("%s",sexo);
    printf("\n Digite a idade:");
    scanf("%d",&idade);
    if (strcmp(sexo,"F")==0 && idade < 25 ){
        printf("ACEITA!");
    }
    else{
        printf("NÃO ACEITA!");
    }
    return 0;
}


