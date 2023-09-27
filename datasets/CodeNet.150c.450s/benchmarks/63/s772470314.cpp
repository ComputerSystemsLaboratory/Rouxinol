#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdio.h>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <math.h>
#include <utility>
#include <string>
#include <ctype.h>
#include <cstring>
#include <cstdio>
#include <sstream>
#include <functional>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 1145141919
#define ll long long
//#define scanf scanf_s

struct edge{ int from, to, cost; };
int v, e, r;
edge es[500001];
int s, t, d;

int main()
{
	cin >> v >> e >> r;
	REP(i, e)
	{
		cin >> s >> t >> d;
		es[i] = { s, t, d };
	}
	int d[100001];
	fill(d, d + 100001, INF);
	d[r] = 0;
	while (1)
	{
		bool f = true;
		REP(i, e)
		{
			edge e = es[i];
			if (d[e.from] != INF&&d[e.to] > d[e.from]+e.cost)
			{
				d[e.to] = d[e.from] + e.cost;
				f = false;
			}
		}
		if (f) break;
	}
	REP(i, v)
	{
		if(!(d[i]==INF)) cout << d[i] << endl;
		else cout << "INF" << endl;
	}
	return 0;
}