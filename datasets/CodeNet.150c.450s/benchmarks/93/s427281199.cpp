#include <iostream>
#include <cstdio>
#include <vector>
#include <stack>
#include <string>
#include <queue>
#include <algorithm>
#include <functional>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;
typedef pair<int, char> P;
static const int INF = 1e9;

void merge(vector<P>& A, int left, int mid, int right)
{
	int n1 = mid - left;
	int n2 = right - mid;
	vector<P> L(n1 + 1);
	vector<P> R(n2 + 1);
	for (int i = 0; i < n1; ++i)
	{
		L[i] = A[left + i];
	}
	for (int i = 0; i < n2; ++i)
	{
		R[i] = A[mid + i];
	}
	L[n1].first = INF;
	R[n2].first = INF;
	int i = 0;
	int j = 0;
	for (int k = left; k < right; ++k)
	{
		if (L[i].first <= R[j].first)
		{
			A[k] = L[i];
			++i;
		}
		else
		{
			A[k] = R[j];
			++j;
		}
	}
}

void mergeSort(vector<P>& A, int left, int right)
{
	if (left + 1 < right)
	{
		int mid = (left + right) / 2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);
		merge(A, left, mid, right);
	}
}

int partition(vector<P>& A, const int p, const int r)
{
	int x = A[r].first;
	int i = p - 1;
	for (int j = p; j < r; ++j)
	{
		if (A[j].first <= x)
		{
			++i;
			P temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
	}
	P temp = A[i + 1];
	A[i + 1] = A[r];
	A[r] = temp;
	return(i + 1);
}

void quickSort(vector<P>& A, const int p, const int r)
{
	if (p < r)
	{
		int q = partition(A, p, r);
		quickSort(A, p, q - 1);
		quickSort(A, q + 1, r);
	}
}

void solve()
{
	int n;
	cin >> n;
	vector<P> A(n);
	for (int i = 0; i < n; ++i)
	{
		P p;
		cin >> p.second >> p.first;
		A[i] = p;
	}
	vector<P> B(n);
	for (int i = 0; i < n; ++i)
	{
		B[i] = A[i];
	}
	quickSort(A, 0, n - 1);
	mergeSort(B, 0, n);
	bool isStable = true;
	for (int i = 0; i < n; ++i)
	{
		if (A[i] != B[i])
		{
			isStable = false;
			break;
		}
	}
	if (isStable)
	{
		cout << "Stable" << endl;
	}
	else
	{
		cout << "Not stable" << endl;
	}
	for (int i = 0; i < n; ++i)
	{
		cout << A[i].second << " " << A[i].first << endl;
	}
}

int main()
{
	solve();
	return(0);
}