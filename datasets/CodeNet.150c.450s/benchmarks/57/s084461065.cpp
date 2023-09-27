#include<stdio.h>
int main(void)
{
	int a,b,x,y;
	char o;
	while (1){
		scanf("%d %c %d",&a,&o,&b);
		if(o=='?') break;
		if(o=='+'){
			x=a+b;
		}
		else if(o=='-'){
			x=a-b;
		}
		else if(o=='*'){
			x=a*b;
		}
		else if(o=='/'){
			x=a/b;
		}
		printf("%d\n",x);
	}
	return 0;
}

