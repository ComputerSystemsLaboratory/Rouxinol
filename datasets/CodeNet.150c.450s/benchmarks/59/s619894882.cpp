#include <stdio.h>

int content(int* a, int n){
	for(int j = 0; j < n - 1; j++){
		printf("%d ", a[j]);
	}
	printf("%d\n",a[n - 1]);
	return 0;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	content(a, n);
	for(int i = 1; i < n; i++){
		int v = a[i];
		int j = i- 1;
		while(j >= 0 && a[j] > v){
			a[j + 1] = a[j];
			j--;
			a[j + 1] = v;
		}
		content(a, n);
	}
	return 0;
}