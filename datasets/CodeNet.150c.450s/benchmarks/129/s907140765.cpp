#include <bits/stdc++.h>
using namespace std;

int main()
{
	int r, c;
	cin >> r >> c;
	vector<vector<int>> v(r + 1, vector<int>(c + 1, 0));
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> v[i][j];
			cout << v[i][j] << " ";
		}
		v[i][c] = accumulate(v[i].begin(), v[i].end(), 0);
		cout << v[i][c] << endl;
	}
	for (int i = 0; i < c + 1; i++)
	{
		int acc = 0;
		for (int j = 0; j < r; j++)
		{
			acc += v[j][i];
		}
		string s = (i == c) ? "\n" : " ";
		cout << acc << s;
	}
	return 0;
}