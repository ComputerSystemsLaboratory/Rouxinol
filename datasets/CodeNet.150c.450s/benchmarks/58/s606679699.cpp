#include <stdio.h>}
#include <string.h>
#include <stdlib.h>

int stack[200];
int it = 0;

void push(int x){
	stack[it] = x;
	it++;
}

int pop(){
	it--;
	return stack[it];
}

int main(void){
		
	int a,b,i;
	
	char str[1000000];
	while(scanf("%s",str)!=EOF){
		if(strcmp(str,"+")==0){
			a = pop();
			b = pop();
			push(a+b);
			
		}else if(strcmp(str,"-")==0){
			a = pop();
			b = pop();
			push(b-a);
			
		}else if(strcmp(str,"*")==0){
			a = pop();
			b = pop();
			push(a*b);
			
		}else if(strcmp(str,"/")==0){
			a = pop();
			b = pop();
			push(a/b);
			
		}else{
			i = atoi(str);
			push(i);
			
		}
	}
	printf("%d\n",stack[0]);

	return 0;
}