#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
#include<vector>
#include<deque>
#include<queue>
#include<stack>
#include<set>
#include<map>
#include<algorithm>
#include<functional>
#include<utility>
#include<bitset>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<cstdio>

using namespace std;

#define REP(i,n) for(int i=0;i<int(n);i++)
#define foreach(c,itr) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
typedef long long ll;
typedef pair<int,int> P;

int dp[100010],a[100010];

int main(void){

	int n;
	cin >> n;
	REP(i,n) cin >> a[i];

	const int INF=1e9+7;
	fill(dp,dp+n,INF);
	REP(i,n){
		*lower_bound(dp,dp+n,a[i])=a[i];
	}

	cout << lower_bound(dp,dp+n,INF)-dp << endl;

	return 0;
}