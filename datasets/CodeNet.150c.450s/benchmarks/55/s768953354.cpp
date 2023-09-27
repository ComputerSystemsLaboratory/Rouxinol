#include <stdio.h>

int main(){
	int sum = 0;
	char ch;

	while(true)
	{
		while((ch = getchar()) != '\n'){
			sum += ch - '0';
		}
		if(sum == 0)
			break;
		else{
			printf("%d\n",sum);
			sum = 0;
		}
	}
}