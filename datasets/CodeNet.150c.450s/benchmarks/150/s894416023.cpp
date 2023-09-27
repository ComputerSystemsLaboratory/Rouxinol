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
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define ALL(v) (v).begin(), (v).end()
#ifdef DBGPRT
#define dbg(n) cerr << "//" << #n << ":" << n <<endl
#else
#define dbg(n) ;
#endif
typedef pair<ll, ll> LLARR;
#define INF 999999999
const double PI = 3.1415926535897932384626433832795;

// ?????????????´????????????§???
ll MAX_ELEM = 2000000;

void CountingSort(int* A, int n, int* Ans)
{
	vector<int> C(MAX_ELEM,0);
	REP(i,n)
	{
		C[A[i]]++;

	}
	
	FOR(i,1,MAX_ELEM)
	{
		C[i] = C[i-1] + C[i];
	}

	FORR(i, n-1, 0)
	{
		Ans[C[A[i]]-1] = A[i];
		C[A[i]]--;
	}
}

int main()
{
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	int *A = new int[2000001];
	REP(i,n) 
	{
		cin >> A[i];
	}
	int *Ans = new int[2000001];
	CountingSort(A, n, Ans);
	
	REP(i,n-1) cout << Ans[i] << " ";
	cout << Ans[n-1] << endl;
	delete[] A;
	delete[] Ans;
	return 0;
}