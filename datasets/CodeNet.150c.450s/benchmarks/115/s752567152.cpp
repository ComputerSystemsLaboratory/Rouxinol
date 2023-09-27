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


static const int N = 1000;
int c[N + 1][N + 1];

int lcs(string X, string Y)
{
	int m = X.size();
	int n = Y.size();
	int maxl = 0;
	X = ' ' + X;
	Y = ' ' + Y;
	for (int i=1; i<=m; i++) c[i][0] = 0;
	for (int j=1; j<=n; j++) c[0][j] = 0;
	
	for (int i=1; i<=m; i++)
	{
		for (int j=1; j<=n; j++)
		{
			if (X[i] == Y[j])
			{
				c[i][j] = c[i - 1][j - 1] + 1;
			} else {
				c[i][j] = max(c[i - 1][j], c[i][j - 1]);
			}
			maxl = max(maxl, c[i][j]);
		}
	}
	
	return maxl;
}


int main()
{
	string s1, s2;
	int n;
	
	cin >> n;
	REP(n)
	{
		cin >> s1 >> s2;
		cout << lcs(s1, s2) << endl;
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