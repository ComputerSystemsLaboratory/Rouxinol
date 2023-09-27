#include <stdio.h>
int main(){
	
	int soma = 0;
	
	char n[] = {"123456789"};
	
	while(true){
		char x[1000] = {0};
		scanf("%s", &x);
		
		if(x[0] == '0')
			return 0;
		
		soma = 0;
		
		for(int i = 0; i < 1000; i++){
		switch (x[i]){
			case '1':
				soma += 1;
				break;
			case '2':
				soma += 2;
				break;
			case '3':
				soma += 3;
				break;
			case '4':
				soma += 4;
				break;
			case '5':
				soma += 5;
				break;
			case '6':
				soma += 6;
				break;
			case '7':
				soma += 7;
				break;
			case '8':
				soma += 8;
				break;
			case '9':
				soma += 9;
				break;
		}
	}
		printf("%d\n",soma);
	}
  	return 0;
}