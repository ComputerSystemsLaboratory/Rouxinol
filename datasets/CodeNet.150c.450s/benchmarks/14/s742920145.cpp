#include<cstdio>

int main(void){
int i,n,x,a;
scanf("%d",&n);
for(i=1;i<=n;i++){
if(i%3==0){printf(" %d",i);
}else {
x=i;
do {
a=0;
if(x%10==3){printf(" %d",i);a=1;}
x=x/10;

} while(x!=0&&a==0);
;}
}printf("\n");
return 0;
}