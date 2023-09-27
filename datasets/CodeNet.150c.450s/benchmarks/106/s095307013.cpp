#include <stdio.h>

int main(){
	
	int a,b,c, soma=0;
	
	scanf("%d", &a);		
	scanf("%d", &b);
	scanf("%d", &c);
	
	for(; a <= b; a++){
		if(c % a == 0)
			soma++;
	}
	printf("%d\n",soma);
	return 0;
}