#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int j, l, N;
	j=0;
	cin >> N;
	int a[N];
	for(int i=1; i<=N; i++)
	{
		cin >> a[i];
		l=1;
		if(a[i]==2)
		{
			j+=1;
		}
		else
		{
			for(int k=2; k<= sqrt(a[i]); k++)
			{
				if(a[i]%k==0)
				{
					l=0;
				}
				else{}
			}
			j+=l;
		}
	}
	cout << j << endl;
	return 0;
}