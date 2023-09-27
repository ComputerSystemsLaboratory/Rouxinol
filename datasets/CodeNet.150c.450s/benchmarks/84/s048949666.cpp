#include <iostream>
#include <vector>

using namespace std;
static const int INF = 1e9;

long int merge(vector<int>& A, int l, int mid, int r)
{
	int n1 = mid - l;
	int n2 = r - mid;
	vector<int> B(n1 + 1);
	for (int i = 0; i < n1; ++i)
	{
		B[i] = A[l + i];
	}
	B[n1] = INF;
	vector<int> C(n2 + 1);
	for (int i = 0; i < n2; ++i)
	{
		C[i] = A[mid + i];
	}
	C[n2] = INF;
	int posB = 0;
	int posC = 0;
	long int sum = 0;
	for (int i = l; i < r; ++i)
	{
		if (B[posB] <= C[posC])
		{
			A[i] = B[posB];
			++posB;
		}
		else
		{
			A[i] = C[posC];
			++posC;
			sum += n1 - posB;
		}
	}
	return(sum);
}

long int mergeSort(vector<int>& A, int l, int r)
{
	if (l + 1 < r)
	{
		long int v1, v2, v3;
		int mid = (l + r) / 2;
		v1 = mergeSort(A, l, mid);
		v2 = mergeSort(A, mid, r);
		v3 = merge(A, l, mid, r);
		return(v1 + v2 + v3);
	}
	else
	{
		return(0);
	}
}

void solve()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int> A(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> A[i];
	}
	cout << mergeSort(A, 0, n) << endl;
}

int main()
{
	solve();
	return(0);
}