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


int w, h, c[50][50];
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void dfs(int x, int y)
{
	c[y][x] = 0;
	
	rep(i, 8)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		
		if (0<=nx && nx<w && 0<=ny && ny<h && c[ny][nx]==1)
		{
			dfs(nx, ny);
		}
	}
}


int main()
{
	while (cin >> w >> h, w || h)
	{
		int ans = 0;
		
		rep(i, h) rep(j, w) cin >> c[i][j];
		
		rep(i, h) rep(j, w)
		{
			if (c[i][j] == 1)
			{
				ans++;
				dfs(j, i);
			}
		}
		
		cout << ans << endl;
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