#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int stack[100];
int it = 0;

void push(int x){
	it++;
	stack[it-1]=x;
//???????????????x????????????it???1????¶????
}

int pop(){
	it--;
	return stack[it];//?????????????????????????????????????????????it??????1?????????
}

int main(void) {
	int x,y,z,t;
	char str[1000000];
	while(scanf("%s",str)!=EOF){
		if(strcmp(str,"+")==0){
			x=pop();
			y=pop();
			z=y+x;
			push(z);
		}else if(strcmp(str,"-")==0){
			x=pop();
			y=pop();
			z=y-x;
			push(z);
		}else if(strcmp(str,"*")==0){
			x=pop();
			y=pop();
			z=y*x;
			push(z);
		}else if(strcmp(str,"/")==0){
			printf("?????????\n");
		}else{
			t=atoi(str);
			push(t);
		}
	}
	printf("%d\n",stack[0]);//stack[0]?????????
	return 0;
}