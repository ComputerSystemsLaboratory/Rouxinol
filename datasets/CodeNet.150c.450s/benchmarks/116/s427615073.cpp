#include <cstdio>

#define MAX(x, y) (x < y) ? y : x

int main(void)
{
	int n, k;
	int data[100000] = {0};
	
	while (1){
		scanf("%d %d", &n, &k);
		if (n == 0 && k == 0) break;
		for (int i = 0; i < n; i++){
			scanf("%d", &data[i]);
		}
		
		for (int i = 0; i < n - 1; i++){
			data[i + 1] += data[i];
		}
		for (int i = 0; i < n; i++){
//			printf("%2d ", data[i]);
		}
		int max = 0;
		for (int i = 0; i <= (n - k); i++){
			if (!(i == 0)) max = MAX(max, data[i + k - 1] - data[i - 1]);
			else max = data[i + k - 1];
		}
//		printf("\n");
		/*
		int max = 0, tmp;
		for (int i = 0; i <= (n - k); i++){
			tmp = 0;
			for (int j = i; j < (i + k); j++){
				tmp += data[j];
			}
			max = MAX(max, tmp);
		}*/
		
		printf("%d\n", max);
	}
	
	return (0);
}