#include <stdio.h>

int main(void)
{
	int cnt = 0;
	int n;
	scanf("%d", &n);
	int x[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &x[i]);
	}
	for(int i = 0; i < n; i++){
		int minj = i;
		for(int j = i; j < n; j++){
			if(x[j] < x[minj]){
				minj = j;
			}
		}
		if(minj != i){
			int temp = x[i];
			x[i] = x[minj];
			x[minj] = temp;
			cnt++;
		}
	}
	for(int i = 0; i < n - 1; i++){
		printf("%d ", x[i]);
	}
	printf("%d\n%d\n", x[n - 1], cnt);
	return 0;
}