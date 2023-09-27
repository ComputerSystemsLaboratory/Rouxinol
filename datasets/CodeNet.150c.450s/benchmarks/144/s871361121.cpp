#include<vector>
#include<iostream>
using namespace std;

int main()
{
	long long n, m, l;
	cin >> n >> m >> l;
	vector<vector<long long>>v1(n, vector<long long>(m));
	for (long long i = 0; i < n; i++)
	{
		for (long long j = 0; j < m; j++)
		{
			cin >> v1[i][j];
		}

	}
	vector<vector<long long>>v2(m, vector<long long>(l));
	for (long long i = 0; i < m; i++)
	{
		for (long long j = 0; j < l; j++)
		{
			cin >> v2[i][j];
		}

	}
	vector<vector<long long>>v3(n, vector<long long>(l, 0));
	for (long long i = 0; i < n; i++)
	{
		for (long long j = 0; j < l; j++)

		{
			for (long long k = 0; k < m; k++)
			{
				v3[i][j] += v1[i][k] * v2[k][j];
			}
		}
	}
	for (long long i = 0; i < n; i++)
	{
		for (long long j = 0; j < l; j++)
		{
			cout << v3[i][j];
			if (j < l - 1)
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	

}
