#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int n;
int a[5001];
int b[5001];
int s;
int main()
{
	while(cin >> n && n>0)
	{
		b[0]=0;
		cin >> a[1];
		b[1]=a[1];
		s=b[1];
		for(int i=2; i<=n; i++)
		{
			cin >> a[i];
			b[i]=b[i-1]+a[i];
			for(int j=0; j<i; j++)
			{
				s=max(s, b[i]-b[j]);
			}	
		}
		cout << s << endl;
	}
	return 0;
}