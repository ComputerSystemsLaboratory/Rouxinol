#include <iostream>

using namespace std;

#define MAX 200000
int A[MAX];
int L[MAX / 2 + 2];
int R[MAX / 2 + 2];
#define INFINITY 2000000000

long long Merge(int A[], int l, int m, int r)
{
	long long count = 0;
	int ll = m - l;
	int rl = r - m;
	for (int i = 0; i < ll; ++i) L[i] = A[l + i];
	for (int i = 0; i < rl; ++i) R[i] = A[m + i];
	L[ll] = INFINITY;
	R[rl] = INFINITY;

	int i = 0;
	int j = 0;
	for (int k = l; k < r; ++k)
	{
		if (L[i] <= R[j])	A[k] = L[i++];
		else
		{
			A[k] = R[j++];
			count += ll - i;// = mid + j - k - 1
		}
	}

	return count;
}

long long MergeSort(int A[], int l, int r)
{
	long long result = 0;
	if (l + 1 < r)
	{
		int m = (l + r) >> 1;
		long long v1 = MergeSort(A, l, m);
		long long v2 = MergeSort(A, m, r);
		long long v3 = Merge(A, l, m, r);

		result = v1 + v2 + v3;
	}

	return result;
}

int main()
{
	int n; cin >> n;
	for (int i = 0; i < n; ++i) cin >> A[i];

	cout << MergeSort(A, 0, n) << endl;

	return 0;
}
