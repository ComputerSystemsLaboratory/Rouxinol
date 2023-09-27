#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool flag = true;
	int cnt = 0;
	int n;
	scanf("%d", &n);
	int x[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &x[i]);
	}
	while(flag){
		flag = false;
		for(int i = n - 1; i >= 0; i--){
			if(x[i] < x[i - 1]){
				int temp = x[i];
				x[i] = x[i - 1];
				x[i - 1] = temp;
				cnt++;
				flag = true;
			}
		}
	}
	for(int i = 0; i < n - 1; i++){
		printf("%d ", x[i]);
	}
	printf("%d\n%d\n", x[n - 1], cnt);
	return 0;
}