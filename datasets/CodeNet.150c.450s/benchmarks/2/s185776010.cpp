#include <iostream>

using namespace std;
int partition(int A[], int p, int r);
void swap(int &a, int &b);
int main(void)
{
	int n, i;
	cin >> n;
	int A[n];
	for (i = 0; i < n; i++)
		cin >> A[i];
	int flag = partition(A, 0, n-1);
	for (i = 0; i < n; i++)
	{
		if (i == flag)
			cout << "[" << A[i] << "] ";
		else if (i != n - 1)
			cout << A[i] << " ";
		else
			cout << A[i];
	}
	cout << endl;
	return 0;
}

int partition(int A[], int p, int r)
{
	int x = A[r];
	int i = p - 1;
	int j;
	for (j = p; j < r; j++)
	{
		if (A[j] <= x)
		{
			i++;
			swap(A[i], A[j]);
		}
	}
	swap(A[i+1], A[r]);
	return i+1;
}
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
