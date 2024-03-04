#include<stdio.h>

int main(){

	int a[10];
	int max = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (a[j + 1] > a[j])
			{
				max = a[j];
				a[j] = a[j + 1];
				a[j + 1] = max;
			}
		}
	}
	
	printf("%d\n", a[0]);
	printf("%d\n", a[1]);
	printf("%d\n", a[2]);

	return 0;
}