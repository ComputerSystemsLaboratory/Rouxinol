#include<iostream>

using namespace std;

const int MAX = 500000;
const int inf = 1000000001;
long long counter = 0;
int L[MAX / 2 + 2], R[MAX / 2 + 2];

void merge(int a[], int left, int mid, int right)
{
	int n1 = mid - left;
	int n2 = right - mid;
	int i, j, k;
	for (i = 0; i < n1; i++)L[i] = a[left + i];
	for (i = 0; i < n2; i++)R[i] = a[mid + i];
	L[n1] = R[n2] = inf;
	i = j = 0;
	for (k = left; k < right; k++)
	{
		if (L[i] <= R[j])
		{
			a[k] = L[i];
			i++;
		}
		else
		{
			a[k] = R[j];
			j++;
		}
		counter++;
	}
}

void mergesort(int a[], int left, int right)
{
	if (left + 1 < right)
	{
		int mid = (left + right) / 2;
		mergesort(a, left, mid);
		mergesort(a, mid, right);
		merge(a, left, mid, right);
	}
}

int main()
{
	int n, i;
	cin >> n;
	int* s = new int[n];
	for (i = 0; i < n; i++)cin >> s[i];
	mergesort(s, 0, n);
	for (i = 0; i < n; i++)
	{
		if (i)cout << " ";
		cout << s[i];
	}
	cout << endl << counter << endl;
    return 0;
}