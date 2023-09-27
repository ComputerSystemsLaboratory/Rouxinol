#include <stdio.h>
int main(){
int a, b, soma;
long area;
scanf("%d", &a);
scanf("%d", &b);
area = (long)a*b;
soma = 2*(a+b);
printf("%ld %d\n",area ,soma);
return 0;
}