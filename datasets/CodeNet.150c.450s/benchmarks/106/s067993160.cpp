#include<cstdio>
int main(void){
int a,b,c;
int x=0;
scanf("%d %d %d",&a,&b,&c);
for(int i=a;i<=b;i++){
if(c%i==0)x++;
}
printf("%d\n",x);
}