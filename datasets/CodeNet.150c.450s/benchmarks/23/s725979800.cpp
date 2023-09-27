#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
#define len(n) (int)n.length()
#define pb push_back
#define ll long long
#define make_pair mkp
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define ALL(v) (v).begin(), (v).end()
#ifdef DBGPRT
#define dbg(n) cerr << "//" << #n << ":" << n <<endl
#else
#define dbg(n) ;
#endif
typedef pair<ll, ll> LLARR;
#define INF 999999999
const double PI = 3.1415926535897932384626433832795;


vector<ll> memo(50,0);
ll fibo(int n)
{
	if ((n==0) || (n==1))
		return memo[n] = 1;
	
	if (memo[n] != 0)
		return memo[n];
	
	memo[n-1] = fibo(n-1);
	memo[n-2] = fibo(n-2);
	return fibo(n-1) + fibo(n-2);
}

int main()
{
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	
	cout << fibo(n) << endl;
	return 0;
}