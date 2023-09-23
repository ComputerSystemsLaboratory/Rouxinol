#include<iostream>

using namespace std;

const static int N_MAX = 100;

void Swap(int &a, int &b)
{
	int t = b;
	b = a;
	a = t;
}

int SelectionSort(int *A, int N)
{
	int count = 0;
	int minj;

	for (int i = 0; i < N - 1; i++)
	{
		minj = i;
		for (int j = i+1; j < N; j++)
		{
			if (A[j] < A[minj])minj = j;
		}
		if (minj > i)
		{
			swap(A[i], A[minj]);
			count++;
		}
	}

	return count;
}

int main()
{
	int N, A[N_MAX],sum;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	sum = SelectionSort(A, N);

	for (int i = 0; i < N; i++)
	{
		if (i <N-1)
			cout << A[i] << ' ';
	}

	cout << A[N-1] << endl << sum << endl;

	return 0;
}
