#include <iostream>
#include <cstring>

using namespace std;

/**
 *  lcs(m,n) = 
 *  if x[m] == y[n] lcs[m-1,n-1]+1
 *  max(lcs[m-1,n],lcs[m,n-1])
 *
 */

string x, y;

const int N = 1000;

int c[N][N];

int lcs(int m, int n)
{
	if (m == -1 || n== -1) return 0;
	if (x[m] == y[n]) return lcs(m-1,n-1) + 1;
	int & cc = c[m][n];
	if (cc != -1) return cc;
	int xx = lcs(m-1,n);
	int yy = lcs(m,n-1);
	cc = xx > yy ? xx : yy;
	return cc;
}

int main()
{
	int n = 0;
	x.reserve(N);
	y.reserve(N);
	cin >> n; 
	for (int i=0;i<n;i++)
	{
		memset(c, -1, sizeof(c));
		cin >> x;
		cin >> y;
		cout << lcs(x.size()-1, y.size()-1) << endl;
		x.clear();
		y.clear();
	}
}