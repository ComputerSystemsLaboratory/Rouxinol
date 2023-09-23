#include<iostream>
#include<algorithm>
using namespace std;
int a[105];

void trace(int a[], int N)
{
	for(int i = 0; i < N; i++)
	{
		if(i > 0)
			cout << " ";
		cout << a[i];	
	} 
	cout << endl;
} 

void insertion_sort(int a[], int N)
{
	int key, j;
	for(int i = 1; i < N; i++)
	{
		key = a[i];
		j = i - 1;
		while(j >= 0 && a[j] > key)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
		trace(a, N);
	}
}

int main ()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	trace(a, n);
	insertion_sort(a, n);
	return 0;
}
