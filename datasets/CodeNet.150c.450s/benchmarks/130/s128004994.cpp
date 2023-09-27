#include<iostream>
using namespace std;
int main()
{
	int i, j, m, n;
	int a[101][101], b[101], sum[101] = {};
	cin >> n >> m;

	for(i=0;i<n;i++)
		for (j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	for (j = 0; j < m; j++)
	{
		cin >> b[j];
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			sum[i] += a[i][j] * b[j];
		}
		if (i == n - 1)cout << sum[i];
		else cout << sum[i] << endl;
	}
	cout << endl;
	return 0;
}
