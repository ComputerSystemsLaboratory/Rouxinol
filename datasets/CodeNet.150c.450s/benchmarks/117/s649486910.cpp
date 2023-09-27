#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int cnt = 0;

void merge(vector<int>& A, int left, int mid, int right)
{
	int n1 = mid - left;
	int n2 = right - mid;
	
	vector<int> L(n1 + 1), R(n2 + 1);
	for (int i = 0; i <= n1 - 1; ++i)
		L[i] = A[left + i];
	for (int i = 0; i <= n2 - 1; ++i)
		R[i] = A[mid + i];
	L[n1] = R[n2] = INT_MAX;

	int i = 0, j = 0;
	for (int k = left; k <= right - 1; ++k)
	{
		cnt++;
		if (L[i] <= R[j])
			A[k] = L[i], i += 1;
		else
			A[k] = R[j], j += 1;
	}
}

void mergeSort(vector<int>& A, int left, int right)
{
	if (left + 1 < right)
	{
		int mid = (left + right) / 2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);
		merge(A, left, mid, right);
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	
	vector<int> S(n);
	for (int i = 0; i < n; ++i)
		cin >> S[i];

	mergeSort(S, 0, n);

	cout << S[0];
	for (int i = 1; i < n; ++i)
		cout << " " << S[i];
	cout << endl;
	cout << cnt << endl;

	return 0;
}