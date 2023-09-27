#include<stdio.h>
int main(){

int i=0;
int x;

while(scanf("%d",&x),x!=0)printf("Case %d: %d\n",++i,x);
return 0;
}
