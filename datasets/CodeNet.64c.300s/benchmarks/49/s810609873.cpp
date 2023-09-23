#include<stdio.h>
#include<math.h>
int main(void){
int a,b,c;
while(scanf("%d %d",&a,&b) != EOF ){
  c= (int)log10(a+b)+1;
  printf("%d\n",c);
}
return 0;
}