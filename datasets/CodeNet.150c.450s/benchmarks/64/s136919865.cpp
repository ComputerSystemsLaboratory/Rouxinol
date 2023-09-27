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


int n, A[50];

int solve(int i, int m)
{
	if (m == 0) return 1;
	if (i >= n) return 0;
	int res = solve(i + 1, m) || solve(i + 1, m - A[i]);
	return res;
}


int main()
{
	int q, M, i;
	
	scanf("%d", &n);
	REP(n) scanf("%d", &A[i]);
	scanf("%d", &q);
	REP(q)
	{
		scanf("%d", &M);
		if (solve(0, M)) printf("yes\n");
		else printf("no\n");
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