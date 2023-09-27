#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdio.h>
#include <list>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
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
#define INF 114514810
#define ll long long
#define SORT(v) sort((v).begin(),(v).end())
//#define scanf scanf_s

int main()
{
	int a, b, c, n, x;
	while (cin >> n >> a >> b >> c >> x, n)
	{
		int y[105];
		int ran[10005];
		REP(i, n) cin >> y[i];
		int frame = 0;
		int i = 0;
		for (frame = 0; frame <= 10000; frame++)
		{
			if (y[i] == x)
			{
				i++;
			}
			if (i >= n)
			{
				cout << frame << endl;
				goto end;
			}
			x = (a*x + b) % c;
		}
		cout << -1 << endl;
	end:;
	}
	return 0;
}