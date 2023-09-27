#include<iostream>
#include<cstdio>
#define Lens 200000
#define M 2000000000

using namespace std;
int A[Lens], L[Lens], R[Lens];
int N;


long long merge(int A[], int left, int right)
{
	int mid = (left + right) / 2;
	int n1 = mid - left;
	int n2 = right - mid;
	long long cnt = 0;
	for (int i = 0; i < n1; i++)
	{
		L[i] = A[left + i];
	}
	for (int i = 0; i < n2; i++)
	{
		R[i] = A[mid + i];
	}
	L[n1] = M;
	R[n2] = M;
	int s1 = 0, s2 = 0;
	for (int i = 0; left + i < right; i++)
	{
		if (L[s1] <= R[s2])
		{
			A[left + i] = L[s1++];
		}
		else
		{
			A[left + i] = R[s2++];
			cnt =cnt+ n1 - s1;
		}
	}
	return cnt;
}

long long mergesort(int A[], int left, int right)
{
	long long x1, x2, x3;
	if (right - left > 1)
	{
		int mid = (left + right) / 2;
		x1 = mergesort(A, left, mid);
		x2 = mergesort(A, mid, right);
		x3 = merge(A, left, right);
		return x1 + x2 + x3;
	}
	else	
	return 0;
}
int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	long long m = mergesort(A, 0, N);
	cout << m << endl;

	return 0;
}

