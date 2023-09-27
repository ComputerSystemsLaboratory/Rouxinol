#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)

const int TOWN = 11;
const int ROAD = 50;
const int INF = 10000;

int d[TOWN][TOWN] ;

int n,a,b,c;
int main()
{
	while(cin >> n && n)
	{
		memset(d,INF,sizeof(d));
		int townnum = 0;
		REP(n)
		{
			cin>> a >> b >> c;
			d[a][b] = c;
			d[b][a] = c;
			d[i][i] = 0;
			townnum = max(townnum,a);
			townnum = max(townnum,b);
		}
		//cout << "town "<<townnum << endl;
		rep(k,townnum+1)rep(i,townnum+1)rep(j,townnum+1)//if(d[i][j] != INF)
		{
			d[i][j] = min(d[i][j], d[i][k]+d[k][j]);
			d[j][i] = d[i][j];
		}
		int time = 1000000,town = 0;
		
		rep(i,townnum+1)//town i
		{
			int sum = 0;
			rep(j,townnum+1) sum += d[i][j];//i to j
			//cout << sum << endl;
			if(sum < time){ time = sum; town = i;}
		}
		cout << town << " " << time << endl;
	}
	return 0;
}