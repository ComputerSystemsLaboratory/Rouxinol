#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <utility>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810

int n, town;
int g[15][15];int d[15][15];


int main()
{
	while(cin>>n, n)
	{
		town = 0;
		REP(i,15)REP(j,15)
		{
			g[i][j] = INF;
			if(i==j) g[i][j] = 0;
		}
		REP(i,n)
		{
			int a,b,c;
			cin >> a >> b >> c;
			if(town < max(a,b)) town = max(a,b);
			g[a][b] = c;
			g[b][a] = c;
		}

		town++;

		REP(k,town)REP(i,town)REP(j,town)
		{
			g[i][j] = min(g[i][j],g[i][k]+g[k][j]);
		}
		int ans = INF;
		int anstown;
		REP(i,town)
		{
			int a = 0;
			REP(j,town)
			{
				a += g[i][j];
			}
			if(a < ans)
			{
				ans = a;
				anstown = i;
			}
		}
		cout << anstown <<" "<< ans <<endl;
	}

}