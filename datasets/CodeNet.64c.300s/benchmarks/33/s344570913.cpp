#include<stdio.h>
int main(void)
{
	int a,b,c;
	char op;
	for(c=0;c<1000;c++){
	scanf("%d %c %d",&a,&op,&b);
	if(op=='+'){
	printf("%d\n",a+b);
	}else if(op=='-'){
	printf("%d\n",a-b);
	}else if(op=='*'){
	printf("%d\n",a*b);
	}else if(op=='/'){
	printf("%d\n",a/b);
	}else if(op=='?'){
	break;
	}
	}
	return 0;
}