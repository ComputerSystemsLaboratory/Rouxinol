#include <bits/stdc++.h>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ELEM(array) (sizeof (array)/sizeof *(array))
#define MAX_N 100
typedef long long ll;

int gcd(int x, int y)
{
	int r;
	while (y > 0)
	{

		if (y > x) swap(y, x);
		r = x%y;
		x = y;
		y = r;
	}
	return x;
}

int main()
{
	int a, b;
	cin >> a >> b;
	
	cout << gcd(a, b) << endl;

	return 0;
}