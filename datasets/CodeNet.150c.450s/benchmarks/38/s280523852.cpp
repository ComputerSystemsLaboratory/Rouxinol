#include<stdio.h>


void swap(int *a, int *b){
	int w = *a;
	*a = *b;
	*b = w;
}


int main(){
	int num;
	scanf("%d", &num);

	int x, y, z, w;
	for(int i = 0; i < num; i++){
		scanf("%d %d %d", &x, &y, &z);
		if(x > z){
			swap(&x, &z);
		}
		if(y > z){
			swap(&y, &z);
		}
		if(x*x + y*y == z*z){
			printf("YES\n");
		}else{
			printf("NO\n");
		}

	}

	return 0;
}