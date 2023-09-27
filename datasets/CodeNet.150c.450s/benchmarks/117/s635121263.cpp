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
#define INF 9999999999
const double PI = 3.1415926535897932384626433832795;

ll A[5000003];
ll ans = 0;

void Marge(ll* A, int n, int left, int mid, int right)
{
	int n1 = mid - left;
	dbg(n1);
	int n2 = right - mid;
	dbg(n2);
	
	vector<ll> L;
	REP(i,n1) L.pb(A[left + i]);
	L.pb(INF);
	vector<ll> R;
	REP(i,n2) R.pb(A[mid+i]);
	R.pb(INF);
	
	ll j = 0;
	ll k = 0;
	FOR(i, left, right)
	{
		if (L[j] >= R[k])
		{
			A[i] = R[k];
			k++;
		}
		else
		{
			A[i] = L[j];
			j++;
		}
	}
	ans += right - left;
}

void MargeSort(ll* A, int n, int left, int right)
{
	if (left + 1 < right)
	{
		int mid = (left + right)/2;
		dbg(mid);
		MargeSort(A, n, left, mid);
		MargeSort(A, n, mid, right);
		Marge(A, n, left, mid, right);
	}
}

int main()
{
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	REP (i,n) cin >> A[i];
	MargeSort(A, n, 0 , n);
	REP (i,n-1) cout << A[i] << " ";
	cout << A[n-1] << endl;
	cout << ans << endl;
	return 0;
}