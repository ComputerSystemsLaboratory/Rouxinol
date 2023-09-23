#include<stdio.h>
int main(void)
{
		int a,b,x;
		char op;
		scanf("%d %c %d",&a,&op,&b);
		while(op!='?'){
			if(op=='+'){
				x=a+b;
				printf("%d\n",x);
			}
			else if(op=='-'){
				x=a-b;
				printf("%d\n",x);
			}
			else if(op=='*'){
				x=a*b;
				printf("%d\n",x);
			}
			else{
				x=a/b;
				printf("%d\n",x);
			}
			scanf("%d %c %d",&a,&op,&b);
		}
		return 0;
}