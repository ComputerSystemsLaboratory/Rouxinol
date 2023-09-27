#include<stdio.h>

int digit(int s){
	int d = 1;
	while(1){
		if(s >= 10){
			s = s/10;
			d++;
		}else{
			break;
		}
	}
	return d;
}


int main(){
	int a, b;

	while(scanf("%d %d", &a, &b) != EOF){
		printf("%d\n", digit(a + b));
	}

	return 0;
}