#include <bits/stdc++.h>
using namespace std;
string x, y;
int N, W;
int v[1001], w[1001];
int a[101][10001];
int main()
{
	cin >> N >> W;
	for(int i=1; i<=N; i++)
	{
		cin >> v[i] >> w[i];
	}
	for(int i=0; i<=N; i++)
	{
		a[i][0]=0;
	}
	for(int i=0; i<=W; i++)
	{
		a[0][i]=0;
	}
	for(int i=1; i<=N; i++)
	{
		for(int j=1; j<=W; j++)
		{
			if(j<w[i])
			{
				a[i][j]=a[i-1][j];
			}
			else
			{
				a[i][j]=max(a[i-1][j], a[i-1][j-w[i]]+v[i]);
			}
		}
	}
	cout << a[N][W] << endl;
	return 0;
}