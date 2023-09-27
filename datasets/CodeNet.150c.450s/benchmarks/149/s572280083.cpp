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


class DisjointSet
{
public:
	vector<int> rank, p;
	
	DisjointSet() {}
	DisjointSet(int size)
	{
		rank.resize(size, 0);
		p.resize(size, 0);
		for (int i=0; i<size; i++) makeSet(i);
	}
	
	void makeSet(int x)
	{
		p[x] = x;
		rank[x] = 0;
	}
	
	bool same(int x, int y)
	{
		return findSet(x) == findSet(y);
	}
	
	void unite(int x, int y)
	{
		link(findSet(x), findSet(y));
	}
	
	void link(int x, int y)
	{
		if (rank[x] > rank[y])
		{
			p[y] = x;
		} else {
			p[x] = y;
			if (rank[x] == rank[y])
			{
				rank[y]++;
			}
		}
	}
	
	int findSet(int x)
	{
		if (x != p[x])
		{
			p[x] = findSet(p[x]);
		}
		
		return p[x];
	}
};


int main()
{
	int n, a, b, q;
	int t;
	
	cin >> n >> q;
	DisjointSet ds = DisjointSet(n);
	
	REP(q)
	{
		cin >> t >> a >> b;
		if (t == 0) ds.unite(a, b);
		else if (t == 1)
		{
			if (ds.same(a, b)) cout << 1 << endl;
			else cout << 0 << endl;
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