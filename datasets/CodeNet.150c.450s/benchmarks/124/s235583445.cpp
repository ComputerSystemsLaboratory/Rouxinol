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


static const int MAX = 100;
static const int INFTY = (1 << 21);
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n, M[MAX][MAX];

void dijkstra()
{
	int minv;
	int d[MAX], color[MAX];
	
	REP(n)
	{
		d[i] = INFTY;
		color[i] = WHITE;
	}
	
	d[0] = 0;
	color[0] = GRAY;
	while (1)
	{
		minv = INFTY;
		int u = -1;
		REP(n)
		{
			if (minv > d[i] && color[i] != BLACK)
			{
				u = i;
				minv = d[i];
			}
		}
		if (u == -1) break;
		color[u] = BLACK;
		for (int v=0; v<n; v++)
		{
			if (color[v] != BLACK && M[u][v] != INFTY)
			{
				if (d[v] > d[u] + M[u][v])
				{
					d[v] = d[u] + M[u][v];
					color[v] = GRAY;
				}
			}
		}
	}
	
	REP(n)
	{
		cout << i << " " << (d[i] == INFTY ? -1 : d[i]) << endl;
	}
}


int main()
{
	cin >> n;
	
	rep(i, n) rep(j, n) M[i][j] = INFTY;
	
	int k, c, u, v;
	rep(i, n)
	{
		cin >> u >> k;
		rep(j, k)
		{
			cin >> v >> c;
			M[u][v] = c;
		}
	}
	
	dijkstra();
	
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