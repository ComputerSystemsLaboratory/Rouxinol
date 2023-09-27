#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main()
{
	int n, q;
	int count = 0;
	int s[10000];
	int t[500];
	
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		cin >> t[i];
	}

	for (int i = 0; i < q; i++)
	{
		int j = 0;
		while (true)
		{
			if (t[i] == s[j])
			{
				count++;
				break;
			}
			if (j == n)
			{
				break;
			}
			j++;
		}
	}

	cout << count << endl;

	return 0;
}