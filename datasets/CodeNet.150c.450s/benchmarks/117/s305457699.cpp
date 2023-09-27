#include<iostream>
#include<cstdio>

using namespace std;
#define Lens 500000
#define Max 2000000000

int A[Lens], L[Lens / 2+2], R[Lens / 2+2];
int N;
int sum = 0;

void merge(int A[], int N, int left, int right)
{
	//	cout <<left<<':'<< A[left] <<' '<<right<<':'<< A[right]<<' ';
	int mid = (left + right) / 2;
	int N1 = mid - left;
	int N2 = right - mid;
	for (int i = 0; i < N1; i++)
	{
		L[i] = A[left + i];
	}
	for (int i = 0; i < N2; i++)
	{
		R[i] = A[mid + i];
	}
	L[N1] = Max;
	R[N2] = Max;
	int tmp1 = 0, tmp2 = 0;
	for (int st = left; st < right; st++)
	{
	//	cout << left << ' ' << right << endl;
		if (L[tmp1] <= R[tmp2])
		{
			sum++;
	//		cout << A[st] << ' ' << L[tmp1] << endl;
			A[st] = L[tmp1++];
		}
		else
		{
			sum++;
	//		cout << A[st] << ' ' << R[tmp2] << endl;
			A[st] = R[tmp2++];
		}

	}
//	cout << endl;
}

void mergesort(int A[], int N, int left, int right)
{
	int mid = (left + right) / 2;

	if (right - left > 1)
	{
		mergesort(A, N, left, mid);
		mergesort(A, N, mid, right);
		merge(A, N, left, right);
	}

}


int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	mergesort(A, N, 0, N);
	for (int i = 0; i < N-1; i++)
	{
		cout << A[i] << ' ';
	}
	cout << A[N - 1] << endl;
	cout << sum << endl;
	return 0;
}
