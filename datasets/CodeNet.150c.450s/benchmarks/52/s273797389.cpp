#include <stdio.h>

int main(void){
	int stack[10];
	int sp = -1;
	int n = 0;
	for(int i=0;i<10;++i){
		stack[i] = 0;
	}
	while(scanf("%d", &n) != EOF){
		if(n == 0){
			printf("%d\n", stack[sp]);
			sp--;
		}else{
			stack[++sp] = n;
		}
	}
	return 0;
}