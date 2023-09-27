#include"stdio.h"
#include<iostream>
#define n_max 500000
#define INF 1000000000;
using namespace std;

int A[n_max] = { 0 };
int L[n_max / 2 + 1] = { 0 };
int R[n_max / 2 + 1] = { 0 };
int cnt = 0;
int n;

void Merge(int left, int mid, int right)
{
	int n1 = mid - left;
	int n2 = right - mid;

	for (int i = 0; i < n1; ++i)
		L[i] = A[left + i];
	for (int i = 0; i < n2; ++i)
		R[i] = A[mid + i];
	L[n1] = R[n2] = INF;

	int i = 0;
	int j = 0;
	for (int k = left; k < right; ++k)
	{
		++cnt;
		if (L[i] <= R[j])
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

	return;
}

void MergeSort(int left, int right)
{
	if (left + 1< right)
	{
		int mid = left + (right - left) / 2;
		MergeSort(left, mid);
		MergeSort(mid , right);
		Merge(left, mid, right);
	}
	return;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> A[i];
	MergeSort(0, n);
	for (int i = 0; i < n; ++i)
		printf("%d%c", A[i], i == n - 1 ? '\n' : ' ');
	cout << cnt << endl;

	return 0;
}
