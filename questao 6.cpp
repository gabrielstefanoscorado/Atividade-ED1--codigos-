#include <stdio.h>
int main(){
int num = 1, c1, c2, c3, c4;
while(num>0){
    printf("\n Digite um número:");
    scanf("%d",&num);
    if (num>=0 && num<=25){
        c1++;
    }
    else if(num>=26 && num<=50){
        c2++;
    }
    else if(num>=51 && num<=75){
        c3++;
    }
    else if(num>=76 && num<=100){
        c4++;
    }
}
printf("\n A quantidade  de numeros entre 0 e 25 eh: %d",c1);
printf("\n A quantidade  de numeros entre 26 e 50 eh: %d",c2);
printf("\n A quantidade  de numeros entre 51 e 75 eh: %d",c3);
printf("\n A quantidade  de numeros entre 76 e 100 eh: %d",c4);

return 0;
}





