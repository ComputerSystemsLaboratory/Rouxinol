#include<stdio.h>
int main(void)
{
	int a,b,i,n;
	char op;
	while(1){
		scanf("%d %c %d",&a,&op,&b);
		if(op=='?') break;
		if(op=='+'){
			n=a+b;
			printf("%d\n",n);
		}
		if(op=='-'){
			n=a-b;
			printf("%d\n",n);
		}
		if(op=='*'){
			n=a*b;
			printf("%d\n",n);
		}	
		if(op=='/'){
			n=a/b;
			printf("%d\n",n);
		}
	}
	
	return 0;
}

