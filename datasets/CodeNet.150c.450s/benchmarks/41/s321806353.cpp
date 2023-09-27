#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i<(n);i++)
#define INF LLONG_MAX/3
#define MAX 100

long long M[MAX][MAX];
int V, E;

int warshall_floyd()
{
	REP(i, V)REP(j, V)REP(k, V)
	{
		if (M[j][i] == INF)break;
		if (M[i][k] == INF)continue;
		M[j][k] = min(M[j][k], M[j][i] + M[i][k]);
	}
	REP(i,V)if (M[i][i] < 0)return 1;
	return 0;
}

int main()
{
	cin >> V >> E;
	REP(i, V)REP(j, V)
	{
		if (i == j)M[i][j] = 0;
		else M[i][j] = INF;
	}
	REP(i, E)
	{
		long long s, t, d;
		cin >> s >> t >> d;
		M[s][t] = d;
	}
	if (warshall_floyd() == 1)
	{
		cout << "NEGATIVE CYCLE" << endl;
		return 0;
	}
	REP(i, V)
	{
		REP(j, V)
		{
			if (i == j)cout<<0;
			else if (M[i][j] >= INF)cout << "INF";
			else cout << M[i][j];
			if (j != V - 1 || (j == V - 2 && i == V - 1))cout << " ";
		}
		cout << endl;
	}
	return 0;
}