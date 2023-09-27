#include<iostream>
using namespace std;
int main()
{
	int i, j, k, m, n, l;
	long long sum[101][101], a[101][101], b[101][101];
	cin >> n >> m >> l;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			cin >> a[i][j];
	for(j=0;j<m;j++)
		for (k = 0; k < l; k++)
			cin >> b[j][k];
	for (i = 0; i < n; i++)
	{
		for (k = 0; k < l; k++)
		{
				for (j = 0; j < m; j++)
				sum[i][k] += a[i][j] * b[j][k];
		if(k==l-1)cout << sum[i][k];
		else cout<<sum[i][k]<<" ";
		}
		cout << endl;
	}
	return 0;
}
