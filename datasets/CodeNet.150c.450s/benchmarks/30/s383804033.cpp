#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<sstream>
#include<string>
#include<math.h>
using namespace std;

int main()
{
	int a[1000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];

	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		int j = a[i];
		int h = -1;
		for (int k = i; k < n; k++)
		{
			if (j>a[k])
			{
				j = a[k];
				h = k;
			}
		}
		if (h != -1)
		{
			ans++;
			a[h] = a[i];
			a[i] = j;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
		if (i != n - 1)cout << " ";
	}
	cout << endl << ans << endl;



}