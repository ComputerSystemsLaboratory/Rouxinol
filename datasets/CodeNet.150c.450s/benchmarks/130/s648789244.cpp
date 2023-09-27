#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector< vector<int> > a(n, vector<int>(m, 0));
	vector<int> b(m);
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}

	for (int i = 0; i < n; i++)
	{
		int res_nth = 0;
		for (int j = 0; j < m; j++)
		{
			res_nth += (a[i][j] * b[j]);
		}
		cout << res_nth << endl;
	}
    return 0;
}

