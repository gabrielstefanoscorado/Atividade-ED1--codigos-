#include <stdio.h>
int main() {
    float valor_receber,troco,calculo_total,op1,op2,op3;
    int a,op;
    do{
        printf("\n 1 - SALGADO COM SUCO R$ 5,00!");
        printf("\n 2 - MIXTO COM SUCO R$ 6,00!");
        printf("\n 3 - X-SALADA COM SUCO R$ 10,00!");
        printf("\n Qual opcao vc escolhe:");
        scanf("%d",&a);
            if (a == 1){ 
                printf("\nVocê escolheu Salgado com suco!");
                printf("\nValor R$ 5,00");
                op1 = 5.00;
            }
            else if (a == 2){
                printf("\nVocê escolheu Mixto com suco!");
                printf("\nValor R$ 6,00");
                op2 = 6.00;
            }
            else if (a == 3){
                printf("\n Você escolheu X-salada com suco!");
                printf("\n Valor R$ 10,00");
                op3 = 10.00;
            }
            printf("\n Vc deseja continuar?");
            scanf("%d",&op);
    }while(op!=2);
    if (op1 == 5.00 && op2 == 6.00){
            calculo_total = 5.0+6.0;
            printf("\n Valor total é: %.2f",calculo_total);
            printf("\n Insira o valor que voce deseja pagar:");
            scanf("%f",&valor_receber);
            troco = (valor_receber - calculo_total);
            printf("\n seu troco eh: %2.f",troco);
        }
    else if (op1 == 5.00 && op2 == 10.00){
            calculo_total = 5.0+10.0;
            printf("\n Valor total é: %.2f",calculo_total);
            printf("\n Insira o valor que voce deseja pagar:");
            scanf("%f",&valor_receber);
            troco = (valor_receber - calculo_total);
            printf("\n seu troco eh: %2.f",troco);
        }
    else if (op2 == 6.00 && op3 == 10.00){
            calculo_total = 6.0+10.0;
            printf("\n Valor total é: %.2f",calculo_total);
            printf("\n Insira o valor que voce deseja pagar:");
            scanf("%f",&valor_receber);
            troco = (valor_receber - calculo_total);
            printf("\n seu troco eh: %2.f",troco);
        }
    else{
            calculo_total = 5.0+6.0+10.0;
            printf("\n Valor total é: %.2f",calculo_total);
            printf("\n Insira o valor que voce deseja pagar:");
            scanf("%f",&valor_receber);
            troco = (valor_receber - calculo_total);
            printf("\n seu troco eh: %2.f",troco);
        }
    return 0;
}



