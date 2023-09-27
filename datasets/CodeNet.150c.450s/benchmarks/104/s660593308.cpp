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
using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ll long long

int w, n;
int ban[35];
int main()
{
	REP(i, 35) ban[i] = i;
	cin >> w >> n;
	REP(i, n)
	{
		int a, b;
		scanf("%d,%d", &a, &b);
		swap(ban[a], ban[b]);
	}
	FOR(i,1, w+1) cout << ban[i] << endl;
	return 0;
}