#include<stdio.h>

int main(void)
{
	int a,b;
	char g;
	
	for(g='A';g!='?';){
		
		scanf("%d %c %d",&a,&g,&b);
		
		if(g=='+'){
			
			printf("%d\n",a+b);
			
		}
		else if(g=='-'){
			
			printf("%d\n",a-b);
			
		}
		else if(g=='*'){
			
			printf("%d\n",a*b);
			
		}
		else if(g=='/'){
			
			printf("%d\n",a/b);
			
		}
	}
		
	return 0;
}