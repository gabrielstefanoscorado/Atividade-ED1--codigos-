#include <stdio.h>

int main() {
   int num, c = 0,a;
   do{
       printf("\n Digite um número:");
       scanf("%d",&num);
       if (num>5){
           c++;
       }
       printf("\n Você deseja continuar? 1 - sim, 2 -não:");
       scanf("%d",&a);
    }while (a!=2);
    printf("A qtd de numeros maiores que 5 são \n %d",c);
    return 0;
}







