#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <map>
#include <functional>
#include <iomanip>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <typeinfo>
#define PI 3.14159265359
#define INF 99999999;
#define rep(i, n) for(int i=0; i<n; i++)
#define REP(n) rep(i, n)
#define EPS 1e-10
typedef long long ll;
using namespace std;
typedef pair<int, int> P;

double distanceAB(double xa, double ya, double xb, double yb);
//void trace(int A[], int N);

/*
class Target
{
public:
	vector <string> draw(int n)
	{

	}
};
*/


#define N 100
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n, M[N][N];
int color[N], d[N], f[N], tt;

void dfs_visit(int u)
{
	int v;
	color[u] = GRAY;
	d[u] = ++tt;
	rep(v, n)
	{
		if (M[u][v] == 0) continue;
		if (color[v] == WHITE)
		{
			dfs_visit(v);
		}
	}
	color[u] = BLACK;
	f[u] = ++tt;
}

void dfs()
{
	int u;
	
	for (u=0; u<n; u++) color[u] = WHITE;
	tt = 0;
	
	for (u=0; u<n; u++)
	{
		if (color[u] == WHITE) dfs_visit(u);
	}
	
	for (u=0; u<n; u++)
	{
		printf("%d %d %d\n", u + 1, d[u], f[u]);
	}
}


int main()
{
	int u, v, k, i, j;
	
	scanf("%d", &n);
	rep(i, n) rep(j, n) M[i][j] = 0;
	
	rep(i, n)
	{
		scanf("%d %d", &u, &k);
		u--;
		rep(j, k)
		{
			scanf("%d", &v);
			v--;
			M[u][v] = 1;
		}
	}
	
	dfs();
	
	return 0;
}

/*
void trace(int A[], int N)
{
	REP(N)
	{
		if (i > 0) cout << " ";
		cout << A[i];
	}
	cout << endl;
}
*/


double distanceAB(double xa, double ya, double xb, double yb)
{
	return sqrt((xb-xa)*(xb-xa) + (yb-ya)*(yb-ya));
}