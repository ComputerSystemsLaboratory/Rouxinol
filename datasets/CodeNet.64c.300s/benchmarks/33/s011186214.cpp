#include <cstdio>

int main(){
	
	while(1){
		int a, b;
		long ans;
		char op;
	
		scanf(" %d %c %d", &a, &op, &b);
		if(op=='?') break;
		else if(op=='+') ans=a+b;
		else if(op=='-') ans=a-b;
		else if(op=='*') ans= a*b;
		else if(op=='/') ans=a/b;
		
		printf("%ld\n", ans);
	}
	
	return 0;
}