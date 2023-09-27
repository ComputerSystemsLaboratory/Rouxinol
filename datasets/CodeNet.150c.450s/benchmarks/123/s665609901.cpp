#include <bits/stdc++.h>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); ++i)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ELEM(array) (sizeof (array)/sizeof *(array))
#define MAX_N 100005
#define MS(m,v) memset(m,v,sizeof(m))
#define SAFE_FREE(ptr) if( ptr != NULL ){ free(ptr); ptr = NULL; }
typedef unsigned int UINT;
typedef long long  ll;
typedef pair<int, int> P;

bool solve(int x)
{
	int i = 3;
	if (x%2==0)return false;
	while (i*i<=x)
	{
		if (x%i==0)
		{
			return false;
		}
		i += 2;
	}
	return true;
}

int main()
{
	int n;
	int ans=0;
	int x;
	cin >> n;
	REP(i, n)
	{
		cin >> x;
		if (x == 2)ans++;
		else if (solve(x))ans++;
		
	}
	cout << ans << endl;
	return 0;
}