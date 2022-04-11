#include <stdio.h>

int main() {
    float peso, altura, imc;
    printf("*****\nFEITO POR GABRIEL STEFANO DA SILVEIRA CORADO\n******");
    printf("\n Digite a altura:");
    scanf("%f",&altura);
    printf("\n Digite o peso:");
    scanf("%f",&peso);
    imc = peso/(altura*altura);
    if(imc<18.5){
        printf("\n Abaixo do peso!");
        printf("\n Seu IMC é: %.2f",imc);
    }
    else if (imc>=18.5 && imc <=25){
        printf("Peso normal!");
        printf("\nSeu IMC é: %.2f",imc);
    }
    else if(imc>=25 && imc<=30){
        printf("Acima do peso!");
        printf("\n Seu IMC é: %.2f",imc);
    }
    else{
        printf("Obeso!");
        printf("\n Seu IMC é: %.2f",imc);
    }
    return 0;
}
