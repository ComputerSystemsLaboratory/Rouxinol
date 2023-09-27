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
#define dbg(n) cerr << "//" << #n << ":" << n <<endl
typedef pair<ll, ll> LLARR;
#define INF 999999999

int n;

bool isSum(int *A, int i, int target, int now)
{
	if (target == now)
		return true;
	if (i >= n)
		return false;
	return isSum(A, i + 1, target, now) || isSum(A, i + 1, target, now + A[i]);
}

int main()
{
	ios::sync_with_stdio(false);

	int A[2001];

	cin >> n;
	REP(i, n)
	{
		cin >> A[i];
	}
	int m;
	cin >> m;

	REP (i,m)
	{
		// mi
		int mi;
		cin >> mi;
		cout << (isSum(A, 0, mi, 0) ? "yes" : "no") << endl;
	}
	return 0;
}