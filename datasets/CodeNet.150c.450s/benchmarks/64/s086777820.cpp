#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#include<algorithm>

using namespace std;

int n;
int a[20];
int q;
int m[200];

bool dfs(int n, int sum, int answer)
{
	if (n <= 20)
	{
		if (sum == answer) return true;

		if (dfs(n + 1, sum + a[n], answer)) return true;

		if (dfs(n + 1, sum, answer)) return true;
	}

	return false;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		cin >> m[i];
	}

	for (int i = 0; i < q; i++)
	{
		if (dfs(0, 0, m[i]))
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}


	return 0;
}