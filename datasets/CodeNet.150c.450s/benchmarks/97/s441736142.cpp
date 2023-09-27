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
#define INF 99999999
#define rep(i, n) for(int i=0; i<n; i++)
#define REP(n) rep(i, n)
#define EPS 1e-10
#define pb push_back
#define mp make_pair
typedef long long ll;
using namespace std;
typedef pair<int, int> P;

bool isLeap(int y);
ll gcd(ll a, ll b);
ll lcm(ll a, ll b);
double distanceAB(double xa, double ya, double xb, double yb);
void trace(int A[], int N);

/*
class Target
{
public:
	vector <string> draw(int n)
	{

	}
};
*/



int main()
{
	int N, n, d;
	
	while (cin >> N, N)
	{
		map<int, pair<int, int> > tbl;
		int minx = 0, maxx = 0, miny = 0, maxy = 0;
		int dx[] = {-1, 0, 1, 0};
		int dy[] = {0, 1, 0, -1};
		
		tbl[0] = mp(0, 0);
		rep(i, N - 1)
		{
			cin >> n >> d;
			int nowx = tbl[n].first;
			int nowy = tbl[n].second;
			int nx = nowx + dx[d];
			int ny = nowy + dy[d];
			tbl[i + 1] = mp(nx, ny);
			minx = min(minx, nx);
			maxx = max(maxx, nx);
			miny = min(miny, ny);
			maxy = max(maxy, ny);
		}
		
		cout << maxx - minx + 1 << " " << maxy - miny + 1 << endl;
	}
	
	return 0;
}


bool isLeap(int y)
{
	return y % 400 == 0
						? true : y % 100 == 0
						? false : y % 4 == 0
						? true : false;
}

ll gcd(ll a, ll b)
{
	return (b > 0) ? gcd(b, a % b) : a;
}

ll lcm(ll a, ll b)
{
	return a / gcd(a, b) * b;
}

void trace(int A[], int N)
{
	REP(N)
	{
		if (i > 0) cout << " ";
		cout << A[i];
	}
	cout << endl;
}

double distanceAB(double xa, double ya, double xb, double yb)
{
	return sqrt((xb-xa)*(xb-xa) + (yb-ya)*(yb-ya));
}