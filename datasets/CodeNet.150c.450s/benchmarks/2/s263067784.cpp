#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int partition(int A[], int p, int r)
{
	int x = A[r];
	int i = p - 1;
	for (int j = p; j < r; j++)
	{
		if (A[j] <= x)
		{
			i = i + 1;
			swap(A[i], A[j]);
		}
	}
	swap(A[i + 1], A[r]);
	return i + 1;
}

int main()
{
	int n, q;
	cin >> n;
	int *A = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	q = partition(A, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		if (i == q)
		{
			cout << "[" << A[i] << "]";
		}
		else
		{
			cout << A[i];
		}
		if (i == n - 1)
		{
			cout << endl;
		}
		else
		{
			cout << " ";
		}
	}
	delete A;
	return 0;
}
