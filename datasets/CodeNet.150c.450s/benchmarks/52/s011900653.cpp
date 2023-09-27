#include <stdio.h>
int main(){
	int stack[100000],i=0;
	while(scanf("%d",&stack[i])!=EOF){
		if(stack[i]==0){
			printf("%d\n",stack[i-1]);
			i--;
		}
		else i++;
	}
	return 0;
}