#include<iostream>

using namespace std;

const static int N_MAX = 100;

void Swap(int &a, int &b)
{
	int t = b;
	b = a;
	a = t;
}

int BubbleSort(int *A, int N)
{
	int count = 0;
	bool flag = true;
	while (flag)
	{
		flag = false;
		for (int i = N - 1; i > 0; i--)
		{
			if (A[i - 1] > A[i])
			{
				swap(A[i - 1], A[i]);
				flag = true;
				count++;
			}
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

	sum = BubbleSort(A, N);

	for (int i = 0; i < N; i++)
	{
		if (i <N-1)
			cout << A[i] << ' ';
	}
	cout << A[N-1] << endl << sum << endl;

	return 0;
}
