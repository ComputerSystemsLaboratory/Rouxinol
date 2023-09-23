#include <stdio.h>

int main(){ 
	int n, i,tmp;
	int num[100] = { 0 };
	scanf("%d", &n);

	for (i = 0; i < n; i++){
		scanf("%d", &num[i]);
	}

	for (i = 0;i<(n/2); i++){
		tmp = num[i];
		num[i] = num[n - i-1];
		num[n - i-1] = tmp;
	}
	for (i = 0; i < n; i++){
		if (i == (n - 1)){
			printf("%d\n", num[i]);
		}
		else{
			printf("%d ", num[i]);
		}
	}

	return 0;
}