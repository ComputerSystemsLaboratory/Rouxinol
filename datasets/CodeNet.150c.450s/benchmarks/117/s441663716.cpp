#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define MAX_LEN 500000
#define BIG 2000000000

int L[MAX_LEN / 2 + 2], R[MAX_LEN / 2 + 2];

int cnt;

void merge_sort_helper(int *A, int n, int l, int m, int r)
{
	for (int i = l; i < m; ++i) L[i - l] = A[i];
	for (int i = m; i < r; ++i) R[i - m] = A[i];
	L[m - l] = R[r - m] = BIG;

	int idx1(0), idx2(0);
	for (int idx0 = l; idx0 < r; ++idx0)
	{
		A[idx0] = (L[idx1] <= R[idx2]) ? L[idx1++] : R[idx2++];
		cnt++;
	}
}

void merge_sort(int *A, int n, int l, int r)
{
	if (l < r - 1)
	{
		int m = l + (r - l) / 2;
		merge_sort(A, n, l, m);
		merge_sort(A, n, m, r);
		merge_sort_helper(A, n, l, m, r);
	}
}

int main()
{
	int A[MAX_LEN], n, i, val;
	cnt = 0;

	cin >> n;
	i = 0;
	while (cin >> A[i++]);

	merge_sort(A, n, 0, n);
	for (int i = 0; i < n; ++i)
	{
		if (i) cout << " ";
		cout << A[i];
	}
	cout << endl;
	cout << cnt << endl;
	return 0;
}