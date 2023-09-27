#include<iostream>
#include<cstdio>
using namespace std;


void trace(int A[], int N)
{
	for (int i = 0; i < N; i++)
	{
		if (i != N - 1) {
			printf("%d ",A[i]);
		}
		else {
			printf("%d\n", A[i]);
		}
	}
}

void sort(int A[], int N)
{
	for (int i = 1; i < N; i++)
	{
		int v = A[i];
		int j = i - 1;
		while (j >= 0 && v < A[j])
		{
			A[j+1] = A[j];
			A[j] = v;
			j--;
		}
		trace(A, N);
	}

}


int main(void)
{
	int N;
	int A[100];

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d",&A[i]);
	}
	trace(A, N);
	sort(A, N);
}
