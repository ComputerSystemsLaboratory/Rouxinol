#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int n;
int a[100];
int M, m, s;
int main()
{
	cin >> n;
	while(n!=0)
	{	
		cin >> a[0];
		M=a[0];
		m=a[0];
		s=a[0];
		for(int i=1; i<n; i++)
		{
			cin >> a[i];
			M=max(M, a[i]);
			m=min(m, a[i]);
			s+=a[i];
		}
		cout << (s-M-m)/(n-2) << endl;
		cin >> n;
	}
	return 0;
}