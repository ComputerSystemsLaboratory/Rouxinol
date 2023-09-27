#include <iostream>
#define MAX 500050
using namespace std;

long long count = 0;

void Merge(int A[], int left, int mid, int right)
{
	int n1 = mid - left;
	int n2 = right - mid;
	int L[n1+10], R[n2+10];
	for (int i = 0;i < n1;i++)
	{
		L[i] = A[left+i];
	}
	for (int i = 0;i < n2;i++)
	{
		R[i] = A[mid+i];
	}
	L[n1] = 1e+9;
	R[n2] = 1e+9;
	int i = 0, j = 0;
	for (int k = left;k < right;k++)
	{
		if (L[i] <= R[j])
		{
			A[k] = L[i];
			i++;
		}
		else
		{
			A[k] = R[j];
			j++;
			count += n1 - i;
		}
	}
}

void Merge_Sort(int A[], int left, int right)
{
	if (left+1 < right)
	{
		int mid = (left + right) / 2;
		Merge_Sort(A, left, mid);
		Merge_Sort(A, mid, right);
		Merge(A, left, mid, right);
	}
}

void Print_Array(int A[], int n)
{
	cout << A[0];
	for (int i = 1;i < n;i++)
	{
		cout << " " << A[i];
	}
	cout << endl;
}

int main ()
{
	int n;
	cin >> n;
	int S[MAX];
	for (int i = 0;i < n;i++)
	{
		cin >> S[i];
	}
	
	Merge_Sort(S, 0, n);

	cout << count << endl;
	
	return 0;
 } 
