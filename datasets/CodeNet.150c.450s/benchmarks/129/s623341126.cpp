#include<iostream>
using namespace std;
int main()
{
	int m, n,i, j, a[101][101];
	long long int sum1[101]={},  ma[101] = {},sum2=0;
	cin >> m >> n;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			cin >> a[i][j];
			sum1[i] += a[i][j];
			ma[j] += a[i][j];
		}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			cout << a[i][j]<<" ";
		cout << sum1[i] << endl;
	}
	for (j = 0; j < n; j++)
		cout << ma[j] << " ";
	for (i = 0; i < m; i++) sum2 += sum1[i];
	cout << sum2 << endl;
	return 0;
}
