#include <stdio.h>

int main(void) {
	int n, m = 100000;
	int i;
	
	scanf("%d", &n);
	
	for(i = 0; n > i; i++){
		m*=1.05;	
		if(m%1000 != 0){
			m = ((int)(m/1000)) * 1000;
			m+=1000;
		}
	}
	printf("%d\n", m);
	return 0;
}