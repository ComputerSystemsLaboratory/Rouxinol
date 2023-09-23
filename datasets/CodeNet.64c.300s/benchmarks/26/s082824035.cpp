#include <bits/stdc++.h>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); ++i)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ELEM(array) (sizeof (array)/sizeof *(array))
#define MAX_N 100005
#define SAFE_FREE(ptr) if( ptr != NULL ){ free(ptr); ptr = NULL; }
typedef unsigned int UINT;
typedef long long  ll;
typedef pair<int, int> P;

int pow(ll x, ll n, ll mod)
{
	ll res = 1;
	while (n>0)
	{
		if (n & 1)res = res*x%mod;
		x = x*x%mod;
		n >>= 1;
	}
	return res;
}

int main()
{
	int m, n; 
	cin >> m >> n;
	cout << pow(m, n, 1000000007) << endl;
	return 0;
}