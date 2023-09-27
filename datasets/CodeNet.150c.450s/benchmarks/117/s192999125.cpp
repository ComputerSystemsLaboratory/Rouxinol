#include <iostream>
using namespace std;
const int inf = 2e9;
const int N = 500100;

int n , a[N],sum;
int L[N/2+2], R[N/2+2];

/******???a[1]??°a[n]????°???°??§**************/
void Merge(int a[], int p, int q, int r)
{
	int i, j, n1 = q - p + 1, n2 = r - q;
	for (i = 1; i <= n1; i++)
		L[i] = a[p + i - 1];
	for (j = 1; j <= n2; j++)
		R[j] = a[q + j];
	L[n1 + 1] = inf;
	R[n2 + 1] = inf;
	i = j = 1;
	for (int k = p; k <= r; k++)
	{
		sum++;
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
	}
}
void MergeSort(int a[], int p, int r)
{
	int q;
	if (p<r)
	{
		q = (p + r) / 2;
		MergeSort(a, p, q);
		MergeSort(a, q + 1, r);
		Merge(a, p, q, r);
	}
}
/*************************/
void print(int a[], int n)
{
	for (int i = 1; i <= n; i++) {
		cout << a[i];
		if (i != n) cout << " ";
	}	
	cout << endl;
}
int main()
{
	int n;
	sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	MergeSort(a,1, n);
	print(a, n);
	cout << sum << endl;
	return 0;
}