#include <stdio.h>
int main(){
	
	int m, f, r, som;
	
	while(1){	
	scanf("%d", &m);
	scanf("%d", &f);
	scanf("%d", &r);
	
	som = m + f;
	
	if(m == -1 && f == -1 && r == -1)
		return 0;
	
	if(m == -1 || f == -1)
		printf("F\n");
	else if(som >= 80)
		printf("A\n");
	else if(80 > som && som >= 65)
		printf("B\n");
	else if(65 > som && som >= 50)
		printf("C\n");
	else if(50 > som && som >= 30){
		if(r >= 50)
			printf("C\n");
		else
			printf("D\n");
	}else if(r >= 50)
		printf("C\n");
	else if(30 > som)
		printf("F\n");
	}

  return 0;
}