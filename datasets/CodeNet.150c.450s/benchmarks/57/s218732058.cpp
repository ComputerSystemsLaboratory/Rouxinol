#include <stdio.h>
#include <math.h>

int main(){
	int a,b,ans;
	char op;
	while(1){
		scanf("%d %c %d",&a,&op,&b);
		if(op=='?') break;
		else if(op=='+') ans=a+b;
		else if(op=='-') ans=a-b;
		else if(op=='*') ans=a*b;
		else if(op=='/') ans=a/b;
		printf("%d\n",ans); 
	}
	return 0;
}