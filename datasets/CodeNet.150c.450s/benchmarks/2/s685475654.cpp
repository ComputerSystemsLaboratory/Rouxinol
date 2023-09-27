#include <iostream>
#define MAX 100000
using namespace std;
 
int Partition(int A[], int p, int r) //[p,r]
{
	int tmp;
	int x = A[r];
	int i = p-1;
	for (int j = p;j < r;j++)
	{
		if (A[j] <= x)
		{
			i++;
			tmp = A[i];
			A[i] = A[j];
			A[j] = tmp;
		}
	}
	tmp = A[i+1];
	A[i+1] = A[r];
	A[r] = tmp;
	return i+1;
}

int main ()
{
	int n, A[MAX];
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> A[i];
	}
	
	int q = Partition(A, 0, n-1);
	
	cout << A[0];
	for (int i = 1;i < n;i++)
	{
		if (i == q)
		{
			cout << " [" << A[i] << "]";
		}
		else cout << " " << A[i];
	}
	cout << endl;
	
	return 0;
 } 
