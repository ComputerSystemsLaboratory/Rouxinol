#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int i, j, k, x, N;
	cin >> N;
	int a[N];
	for(i=1; i<=N; i++)
	{
		cin >> a[i];
	}
	for(k=1; k<N; k++)
	{
		cout << a[k] << " ";
	}
	cout << a[N] << endl;
	for(i=2; i<=N; i++)
	{
		for(j=i-1; j>=1; j--)
		{
			if(a[j]>a[j+1])
			{
				x=a[j+1];
				a[j+1]=a[j];
				a[j]=x;
			}
			else{}
		}
		for(k=1; k<N; k++)
		{
			cout << a[k] << " ";
		}
		cout << a[N] << endl;
	}
	return 0;
}