#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main()
{
	int a[100], n,i;
	cin >> n;
	for (i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	if (n > 0)cout << a[n - 1];
	for (i = n - 2; i >= 0; i--)
	{
		cout << ' ' << a[i];
	}
	cout << endl;
}