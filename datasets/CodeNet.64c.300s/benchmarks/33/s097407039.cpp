#include <stdio.h>

int main(void)
{
	int a;
	int b;
	char op;
	int c = 0;
	while(1)
	{
		scanf("%d %c %d",&a,&op,&b);
		if(op == '+'){
			c = a+b;
			printf("%d\n", c);
		}else if(op == '-'){
			c = a-b;
			printf("%d\n", c);
		}else if(op== '*'){
			c = a*b;
			printf("%d\n", c);
		}else if(op== '/'){
			c = a/b;
			printf("%d\n", c);
		}else{
			if(op=='?')
				break;
		}
		
	}
return(0);
}