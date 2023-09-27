#include <iostream>
#include <algorithm>

using namespace std;

int n;
int *A, *B;

void countingSort(int *A, int *B, int k)
{
	int *C = new int[k + 1];
	for (int i = 0; i <= k; i++)
	{
		C[i] = 0;
	}
	for (int j = 1; j <= n; j++)
	{
		C[A[j]]++;
	}
	for (int i = 1; i <= k; i++)
	{
		C[i] = C[i] + C[i - 1];
	}
	for (int j = n; j >= 1; j--)
	{
		B[C[A[j]]] = A[j];
		C[A[j]]--;
	}
}

int main() {
	int maxAi = 0;
	cin >> n;
	A = new int[n + 1];
	for (int i = 1; i <= n; i++)
	{
		cin >> A[i];
		maxAi = max(maxAi, A[i]);
	}
	B = new int[n + 1];
	countingSort(A, B, maxAi);
	for (int i = 1; i <= n; i++)
	{
		cout << B[i];
		if (i == n)
		{
			cout << endl;
		}
		else
		{
			cout << " ";
		}
	}
	return 0;
}
