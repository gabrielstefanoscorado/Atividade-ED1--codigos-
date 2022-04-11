#include <stdio.h>

int main() {
    int estado;
    printf("\n 1 - AM");
    printf("\n 2 - SP");
    printf("\n 3 - RJ");
    printf("\n 4 - CE");
    printf("\n 5 - BA");
    printf("\n Digite o numero da sigla do seu estado:");
    scanf("%d",&estado);
    switch(estado){
        case 1:
            printf("Voce eh Amazonense!");
            break;
        case 2:
            printf("Voce eh Paulista!");
            break;
        case 3:
            printf("Voce eh Carioca!");
            break;
        case 4:
            printf("Voce eh Cearense!");
            break;
        case 5:
            printf("Voce eh Baiano!");
            break;
        default:
            printf("Voce inseriu um numero errado, tente novamente!");
    }
    return 0;
}

