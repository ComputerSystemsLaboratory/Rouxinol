#include <stdio.h>

int main(void)
{
	int i, j, a[3];

	scanf("%d %d %d", &a[0], &a[1], &a[2]);

	for(i = 0; i < 2; i++){
		for(j = 2; j > i; j--)
		{
			if(a[j-1] > a[j]){
			int temp = a[j];
			a[j] = a[j-1];
			a[j-1] = temp;
			}
		}
	}

	printf("%d %d %d\n", a[0], a[1], a[2]);
}