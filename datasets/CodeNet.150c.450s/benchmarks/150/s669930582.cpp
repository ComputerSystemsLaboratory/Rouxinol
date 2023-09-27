#include <iostream>
using namespace std;

void CountingSort(int A[], int B[], int n, int k)
{
	int* C = new int[k + 1];
	for (int i = 0; i < k + 1; ++i)
	{
		C[i] = 0;
	}
	for (int i = 0; i < n; ++i)
	{
		C[A[i]]++;
	}
	for (int i = 1; i < k+1; ++i)
	{
		C[i] = C[i - 1] + C[i];
	}
	for (int i = n - 1; i >= 0; --i)
	{
		C[A[i]]--;
		B[C[A[i]]] = A[i];
	}
}

int main()
{
	int n = 0;
	cin >> n;
	int* A = new int[n];
	int* B = new int[n];
	int max = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> A[i];
		if (A[i] > max)
		{
			max = A[i];
		}
		B[i] = A[i];
	}
	CountingSort(A, B, n, max);
	for (int i = 0; i < n; ++i)
	{
		if (i != 0)
		{
			cout << ' ';
		}
		cout << B[i];
	}
cout<<endl;
	return 0;
}
