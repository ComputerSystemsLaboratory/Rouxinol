#include <stdio.h>

int data[110];

void BinaryInsertSort(int i)
{
	int left, mid, right, j;
	int insert = data[i], tmp;
	
	left = 0;
	right = i;
	while (left < right){
		mid = (left + right) / 2;
		if (data[mid] < insert){
			left = mid + 1;
		}
		else {
			right = mid;
		}
	}
	for (j = left; j <= i; j++){
		tmp = insert;
		insert = data[j];
		data[j] = tmp;
	}
}

int main(void)
{
	int n, i, j;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%d", &data[i]);
	}
	for (i = 0; i < n; i++){
		BinaryInsertSort(i);
		for (j = 0; j < n - 1; j++){
			printf("%d ", data[j]);
		}
		printf("%d\n", data[n - 1]);
	}
	
	return (0);
}