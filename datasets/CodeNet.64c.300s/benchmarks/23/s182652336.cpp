#include<stdio.h>
 
int main(){
int a,b;

 do{
scanf("%d", &a);
}while(a<1||a>100);

 do{
scanf("%d", &b);
}while(b<1||b>100);

printf("%d %d\n", a*b,(a+b)*2);

}