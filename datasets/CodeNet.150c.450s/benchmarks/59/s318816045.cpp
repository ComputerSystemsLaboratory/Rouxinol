#include<stdio.h>

void insertionSort(int* input, int N);

int main()
{
	int N = 0;
	scanf("%d", &N);
	int input[1000];

	for (int i = 0; i < N; ++i)
		scanf("%d", &input[i]);

	for (int i = 0; i < N; ++i)
	{
		printf("%d", input[i]);
		if (i != N-1)
			printf(" ");
	}
	printf("\n");

	insertionSort(input, N);
	

	return 0;
}

void insertionSort(int* input, int N)
{
	for (int i = 1; i < N; ++i)
	{
		int index		= i - 1;
		int curValue	= input[i];
		
		while ((index >= 0) && (input[index] > curValue))
		{
			input[index+1] = input[index];
			index--;
		}
		input[index+1] = curValue;
		for (int i = 0; i < N; ++i)
		{
			printf("%d", input[i]);
			if (i != N - 1)
				printf(" ");
		}
		printf("\n");
	}
}