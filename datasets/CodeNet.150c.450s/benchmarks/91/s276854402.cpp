#include <bits/stdc++.h>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ELEM(array) (sizeof (array)/sizeof *(array))
#define MAX_N 100
#define SAFE_FREE(ptr) if( ptr != NULL ){ free(ptr); ptr = NULL; }
typedef unsigned int UINT;
#define ll long long
typedef pair<int, int> P;

bool prime[1000005];

void solve()
{
	REP(i, 1000005)prime[i] = true;
	prime[0] = prime[1] = false;
	for (int i = 2; i*i <= 1000000;i++)
	{
		if (prime[i] == true)
		{
			for (int j = 2; j*i <= 1000000; j++){
				if (prime[i*j] == true)prime[i*j] = false;
			}
		}
	}
}

int main()
{
	int n;
	while (cin >> n)
	{

		int ans = 0;

		solve();
		REP(i, n + 1){
			if (prime[i] == true){
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}