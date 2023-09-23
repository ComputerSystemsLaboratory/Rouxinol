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
	int n;
	int a[1000];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j != 0; j--)
		{
			if (a[j]<a[j - 1])
			{
				int s = a[j];
				a[j] = a[j - 1];
				a[j - 1] = s;
				ans++;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
		if (i != n - 1)cout << " ";
	}
	cout << endl;
	cout << ans << endl;
	return 0;
}