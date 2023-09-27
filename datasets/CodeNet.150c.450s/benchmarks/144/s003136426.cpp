#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n, m, l;
	cin >> n >> m >> l;
	vector< vector<int> > a(n, vector<int>(m, 0));
	vector< vector<int> > b(m, vector<int>(l, 0));
	vector< vector<long> > c(n, vector<long>(l, 0));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int j = 0; j < m; j++)
	{
		for (int k = 0; k < l; k++)
		{
			cin >> b[j][k];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < l; k++)
		{
			for (int j = 0; j < m; j++)
			{
				c[i][k] += a[i][j] * b[j][k];
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < l; k++)
		{
			cout << c[i][k];
			if (k == l - 1)
			{
				cout << endl;
			}
			else
			{
				cout << " ";
			}
		}
	}
    return 0;
}
