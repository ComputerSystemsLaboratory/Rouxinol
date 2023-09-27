#include<stdio.h>

int main(){
	int a1 = 0, a2 = 0, a3 = 0;
	int x;
	for(int i = 0; i < 10; i++){
		scanf("%d", &x);
		if(x > a3){
			a3 = x;
		}
		if(x > a2){
			a3 = a2;
			a2 = x;
		}
		if(x > a1){
			a2 = a1;
			a1 = x;
		}
	}

	printf("%d\n%d\n%d\n", a1, a2, a3);

	return 0;
}