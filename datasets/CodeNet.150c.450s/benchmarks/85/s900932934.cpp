/*
* @Author: Samson
* @Date:   2018-06-11 12:09:01
* @Last Modified by:   Samson
* @Last Modified time: 2018-06-11 15:37:51
*/
//   @URL : http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_10_B
#include<bits/stdc++.h>
#include<algorithm>
#include <cstdlib>
#define INF 0x3f3f3f3f
using namespace std;
typedef long long LL;
const int MAXN = 1e5+10;

int p[205],f[105][105];

int main(void)
{
	ios::sync_with_stdio(false); 
	//cin.tie(0);
	int n;
	cin>>n;
	for(int i = 1; i <= n; ++i)
		cin>>p[i-1]>>p[i];
	memset(f,INF,sizeof f);
	for(int i = 1; i <= n; ++i)	f[i][i] = 0;
	for(int i = 2; i <= n; ++i)
	{
		for(int l = 1; l <= n-i+1; ++l)
		{
			int r = i+l-1;
			f[l][r] = INF;
			for(int k = l; k <= r-1; ++k)
				f[l][r] = min(f[l][r], f[l][k]+f[k+1][r]+p[l-1]*p[k]*p[r]);
		}
	}
	cout<<f[1][n]<<'\n';
	return 0;
}

