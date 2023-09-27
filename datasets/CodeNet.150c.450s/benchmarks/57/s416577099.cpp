#include<stdio.h>
int main(){
	int a,b,x,i;
	char z;
	for(i=0;i<=100000;i++){
		scanf("%d %c %d",&a,&z,&b);
		if(z == '+'){x=a+b;};
		if(z == '-'){x=a-b;};
		if(z == '*'){x=a*b;};
		if(z == '/'){x=a/b;};
		if(z == '?'){break;};
		printf("%d\n",x);
		}
	return 0;}