#include<iostream>
#define FOR(i,n) for(int i=0;(i)<(n);(i)++)
using namespace std;
int G[101][101] = {};

int main()
{
	int n;
	cin >> n;
	FOR(i, n)
	{
		int m,u;
		cin >> u >> m;
		FOR(j, m)
		{
			int l;
			cin >> l;
			G[u-1][l-1] = 1;
		}
	}
	FOR(i, n)
	{
		FOR(j, n)
		{
			cout << G[i][j];
			if (j != n - 1)cout << " ";
		}
		cout << endl;
	}
	return 0;
}