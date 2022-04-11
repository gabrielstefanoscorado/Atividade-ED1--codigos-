#include <stdio.h>
float multiplicar(float x, float y){
     return x*y;
 }
float dividir(float a, float b){
     return a/b;
 } 
void mostrarmultiplicacao(float x, float y){
     printf("O resultado da multiplicacao eh: %.2f",multiplicar(x,y));
 }
void mostrardivisao(float a, float b){
     printf("O resultado da divisao eh: %.2f",dividir(a,b));
 }
main() {
    float num1, num2;
    int op;
    printf("\n Digite o numero:");
    scanf("%f",&num1);
    printf("\n digite outro numero:");
    scanf("%f",&num2);
    printf("1 - Multiplicar , 2 - Dividir:");
    scanf("%d",&op);
    if (op == 1){
        multiplicar(num1,num2);
        mostrarmultiplicacao(num1,num2);
    }
    else{
        dividir(num1,num2);
        mostrardivisao(num1,num2);
    }
}








