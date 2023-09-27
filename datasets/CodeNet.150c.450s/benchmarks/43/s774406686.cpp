#include<stdio.h>
int main(void)
{
    int i,a,b,c,d,e;
	while(1){
	scanf("%d",&a);
	if(a==0) break;
	d=0; e=0;
	for(i=0;i<a;i++){
	scanf("%d %d",&b,&c);
	if(b==c){
	d+=b;
	e+=c;
	}
	else if(b>c){
	d+=b+c;
	}
	else if(b<c){
	e+=b+c;
	}
	}
	printf("%d %d\n",d,e);
	}
	return 0;
	}