#include<stdio.h>
 
int main(){
int x;

 do{
scanf("%d", &x);
}while(x<0||x>100);

printf("%d\n", x*x*x);

}