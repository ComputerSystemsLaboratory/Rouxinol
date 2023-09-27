#include <iostream>
#include <vector>

using namespace std;
int n;

void CountingSort(vector<int>& A, vector<int>& B, int k)
{
	vector<int> C(k + 1);
	C.clear();

	for (int j = 1; j <= n; ++j)
		C[A[j]]++;

	for (int i = 1; i <= k; ++i)
		C[i] = C[i] + C[i - 1];

	for (int j = n; j > 0; --j)
		B[C[A[j]]] = A[j], C[A[j]]--;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	int max = 0;
	vector<int> A(n + 1), B(n + 1);
	for (int i = 1; i <= n; ++i)
	{
		cin >> A[i];
		if (A[i] > max) max = A[i];
	}
	
	CountingSort(A, B, max);

	cout << B[1];
	for (int i = 2; i <= n; ++i)
		cout << " " << B[i];
	cout << endl;

	return 0;
}