#include <stdio.h>

int main(void){
   //Calculadora de função de primeiro grau
  int a, b, x;
 
    printf("\nf(x) = ax + b");
  
    printf("\nEntre com valor a = ");
      scanf("%i", &a);
  
    printf("\nEntre com valor b = ");
      scanf("%i", &b);
 
    x = -b / a;
 
    printf("\nSolução S = %i", x);
 
    return 0;
  }