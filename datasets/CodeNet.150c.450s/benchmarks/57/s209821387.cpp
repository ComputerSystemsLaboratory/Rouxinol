#include<stdio.h>
int main(void){
	int a,b,t,c,f;
	char s;
	for(;;){
	scanf("%d %c %d",&a,&s,&b);
	if(s=='+'){
		t=a+b;
	}
	
	if(s=='-'){
		t=a-b;
	}
	
	
	if(s=='/'){
		t=a/b;
	}
	
	
	if(s=='*'){
		t=a*b;
	}
		if(s=='?'){
		break;
		}
		printf("%d\n",t);
	}

		
}