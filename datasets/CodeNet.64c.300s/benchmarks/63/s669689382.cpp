#include<stdio.h>


void swap(int *a, int *b){
	int w = *a;
	*a = *b;
	*b = w;
}

int gojoho(int a, int b){
	if(b > a){
		swap(&a, &b);
	}
	while(1){
		int r = a % b;
		if(r == 0){
			break;
		}
		a = b;
		b = r;
	}
	return b;
}

int main(){
	int a, b;

	while(scanf("%d %d", &a, &b) != EOF){
		int g = gojoho(a, b);
		int l = a/g*b;
		printf("%d %d\n", g, l);
	}
	
	return 0;
}