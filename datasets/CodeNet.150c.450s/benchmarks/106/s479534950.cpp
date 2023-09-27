#include <stdio.h>
int main(void){

 int a,b,c;
 int n,i;
 int s;
 scanf("%d%d%d",&a,&b,&c);
 s=0;
 for(i=a;i<=b;i++){
 if(c%i==0){
 s++;

}
}
printf("%d\n",s);
 return 0;

}