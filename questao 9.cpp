#include <stdio.h>

int main() {
  int i = 15, soma = 0 ;
  for (i = 15; i<=250; i++){
    if (i%2 != 0 && i%6 == 0){
        soma = soma + i;
    }
  }
  printf("O resultado da soma eh: %d",soma);
  return 0;
}







