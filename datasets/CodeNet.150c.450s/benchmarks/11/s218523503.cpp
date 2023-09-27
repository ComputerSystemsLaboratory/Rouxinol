#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	map<string, vector<int>> m;
	m["S"].resize(14);
	m["H"].resize(14);
	m["C"].resize(14);
	m["D"].resize(14);
	for (int i = 0; i < n; i++)
	{
		string s;
		int k;
		cin >> s >> k;
		m[s][k] = 1;
	}

	vector<string> c = { "S","H","C","D" };
	for (int i = 0; i < 4; i++)
	{
		for (int j = 1; j < 14; j++)
		{
			if (m[c[i]][j] == 0)
			{
				cout << c[i] << " " << j << endl;
			}
		}
	}


	return 0;
}