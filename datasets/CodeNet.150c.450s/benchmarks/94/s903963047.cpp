#include<iostream>
#include<cstdio>

void trace(int A[], int N)
{
	for (int i = 0; i < N; i++)
	{
		if (i != N-1)
		{
			printf("%d ", A[i]);
		}
		else
		{
			printf("%d\n", A[i]);
		}
	}
}

int sort(int A[], int N)
{
	int sw = 0;
	bool flg = true;
	while (flg)
	{
		for (int i = 0; flg; i++) 
		{
			flg = false;
			for (int j = N - 1; j >= i + 1; j--)
			{
				if (A[j] < A[j - 1])
				{
					std::swap(A[j], A[j - 1]);
					flg = true;
					sw++;
				}
			}

		}
	}
	trace(A, N);
	return sw;
}

int main(void)
{
	int N;
	scanf("%d", &N);

	int A[100];
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}
	printf("%d\n", sort(A, N));
}

