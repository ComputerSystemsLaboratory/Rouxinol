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


static const int N = 100;


int main()
{
	int M[N][N];
	int n, u, k, v;
	
	cin >> n;
	rep(i, n) rep(j, n) M[i][j] = 0;
	rep(i, n)
	{
		cin >> u >> k;
		u--;
		rep(j, k)
		{
			cin >> v;
			v--;
			M[u][v] = 1;
		}
	}
	
	rep(i, n)
	{
		rep(j, n)
		{
			if (j) cout << " ";
			cout << M[i][j];
		}
		cout << endl;
	}
	
	return 0;
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