#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int x, l, N;
	l=0;
	cin >> N;
	int a[100];
	for(int i=0; i<N; i++)
	{
		cin >> a[i];
	}
	for(int j=0; j<N; j++)
	{
		for(int k=0; k<N-1; k++)
		{
			if(a[k]>a[k+1])
			{
				x=a[k];
				a[k]=a[k+1];
				a[k+1]=x;
				l+=1;
			}
			else{}
		}
	}
	for(int m=0; m<N-1; m++)
	{
		cout << a[m] << " ";
	}
	cout << a[N-1] << endl;
	cout << l << endl;
	return 0;
}