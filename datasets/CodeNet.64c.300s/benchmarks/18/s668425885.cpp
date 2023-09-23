#include <bits/stdc++.h>
using namespace std;
int n;
int a[31];
int main()
{
	a[0]=1;
	a[1]=1;
	a[2]=a[0]+a[1];
	for(int i=3; i<31; i++)
	{
		a[i]=a[i-1]+a[i-2]+a[i-3];
	}
	while(cin >> n && n>0)
	{
		cout << (((a[n]+9)/10)+364)/365 << endl;
	}
	return 0;
}