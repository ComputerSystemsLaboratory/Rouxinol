#include <bits/stdc++.h>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ELEM(array) (sizeof (array)/sizeof *(array))
#define MAX_N 100
#define SAFE_FREE(ptr) if( ptr != NULL ){ free(ptr); ptr = NULL; }
typedef unsigned int UINT;
typedef long long ll;


int n, k;
int ans = 0;
void dfs(int i,int j, int sum)
{
	if (i == n)
	{
		if (sum == k)ans++;
	}
	else if (j<=9&&sum<=k)
	{
		dfs(i + 1, j + 1, sum + j);
		dfs(i, j + 1, sum);
	}
}

int main()
{
	while (cin>>n>>k)
	{
		if (n == 0 && k == 0)return 0;
		ans = 0;
		dfs(0, 0, 0);
		cout << ans << endl;
	}
	return 0;
}