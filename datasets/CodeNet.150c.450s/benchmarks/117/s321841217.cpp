#include <iostream>
#include <vector>

#define SENTINEL 1000000001

using namespace std;

int cnt = 0;

void merge(vector<int> &A, int left, int mid, int right)
{
	int n1 = mid - left;
	int n2 = right - mid;
	vector<int> L(n1 + 1), R(n2 + 1);
	for (int i = 0; i < n1; i++)
	{
		L[i] = A[left + i];
	}
	for (int i = 0; i < n2; i++)
	{
		R[i] = A[mid + i];
	}
	L[n1] = SENTINEL;
	R[n2] = SENTINEL;
	int i = 0;
	int j = 0;
	for (int k = left; k < right; k++)
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
		}
		cnt++;
	}
}

void mergeSort(vector<int> &A, int left, int right)
{
	if (left + 1 < right)
	{
		int mid = (left + right) / 2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);
		merge(A, left, mid, right);
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> S(n);
	for (int i = 0; i < n; i++)
	{
		cin >> S[i];
	}
	mergeSort(S, 0, n);
	for (int i = 0; i < n; i++)
	{
		cout << S[i];
		if (i == S.size() - 1)
		{
		    cout << endl;
		}
		else
		{
		    cout << " ";
		}
	}
	cout << cnt << endl;
	return 0;
}
