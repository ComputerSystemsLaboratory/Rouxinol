#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int n, k;
int a[1000000];
int s, t;
int main()
{
	cin >> n >> k;
	while(n*k!=0)
	{
		s=0;
		for(int i=0; i<k; i++)
		{
			cin >> a[i];
			s+=a[i];
			t=s;
		}
		for(int i=k; i<n; i++)
		{
			cin >> a[i];
			t=t+a[i]-a[i-k];
			s=max(s, t);
		}
		cout << s << endl;
		cin >> n >> k;
	}
	return 0;
}