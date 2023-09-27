#include<stdio.h>
 
int main(){
 int a,b,c;
 while(~scanf("%d%d",&a,&b)){
 c=0;
 a+=b;
 while(a){
 a/=10;
 c++;
}
printf("%d\n",c);
}
return 0;
}