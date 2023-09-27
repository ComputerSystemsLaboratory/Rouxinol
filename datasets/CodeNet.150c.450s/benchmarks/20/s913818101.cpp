#include<stdio.h>

int s;
int h;
int m;

int main(){
scanf("%d", &s);
m = s / 60;
s = s % 60;
h = m / 60;
m = m % 60;
printf("%d:%d:%d\n", h, m, s);
return 0;
}