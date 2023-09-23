#include <iostream>
using namespace std;
int n;
int m =0;
int *a;

void select_sort()
{
	for(int i=0; i<n-1; i++)
	{
		int minj = i;
		for (int j=i+1; j<n; j++)
		{
			if (a[minj] > a[j])
			{
				minj = j;
			}
		}
		
		if (minj != i)
		{
			int ai = a[i];
			a[i] = a[minj];
			a[minj] = ai;
			m++;
		}
	}
}

int main()
{
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n;	i++)
	{
		cin >> a[i];
	}
	
	select_sort();
	
	for (int i=0; i<n;	i++)
	{
		if (i) cout << ' ';
		cout << a[i];
	}
	
	cout << endl;
	cout << m << endl;
	
	return 0;
}