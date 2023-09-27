#include <cstdio>

int main(){
	char x[1001];
	while(1){
		int U=0, i=0;
	
		scanf("%s", x);
		if(x[0]=='0') break;
	
		while(x[i]!='\0'){
			U += x[i]-'0';
			++i;
		}
		
		printf("%d\n", U);
	}
	
	return 0;
}

