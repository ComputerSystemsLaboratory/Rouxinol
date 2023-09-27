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


static const int MAX = 100000;
static const int NIL = -1;

int n;
vector<int> G[MAX];
int color[MAX];

void dfs(int r, int c)
{
	stack<int> S;
	S.push(r);
	color[r] = c;
	while (!S.empty())
	{
		int u = S.top(); S.pop();
		REP(G[u].size())
		{
			int v = G[u][i];
			if (color[v] == NIL)
			{
				color[v] = c;
				S.push(v);
			}
		}
	}
}

void assignColor()
{
	int id = 1;
	REP(n) color[i] = NIL;
	REP(n) if (color[i] == NIL) dfs(i, id++);
}


int main()
{
	int s, t, m, q;
	
	cin >> n >> m;
	
	REP(m)
	{
		cin >> s >> t;
		G[s].push_back(t);
		G[t].push_back(s);
	}
	
	assignColor();
	
	cin >> q;
	
	REP(q)
	{
		cin >> s >> t;
		if (color[s] == color[t])
		{
			cout << "yes" << endl;
		} else {
			cout << "no" << endl;
		}
	}
	
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