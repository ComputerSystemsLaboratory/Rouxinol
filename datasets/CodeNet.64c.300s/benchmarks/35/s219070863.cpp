#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable:4996)
int main(){
	int n = 0;
	int arr[105][105] = { 0 };
	scanf("%d", &n);
	for (int m = 0; m < n; m++){
		int a = 0;
		int b = 0;
		scanf("%d %d", &a, &b);
		for (int x = 0; x < b; x++){
			int c = 0;
			scanf("%d", &c);
			getchar();
			arr[a - 1][c - 1] = 1;
		}
	}
	for (int m = 0; m < n; m++){
		for (int o = 0; o < n-1; o++){
			printf("%d ", arr[m][o]);
		}
		printf("%d", arr[m][n-1]);
		printf("\n");
	}
	return 0;
}
