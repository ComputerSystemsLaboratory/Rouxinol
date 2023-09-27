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

int dp[1010][1010];

int main(void){
	int i,j,k;

	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int q;
	cin >> q;
	for(i=0;i<q;i++){
		string x,y;
		cin >> x >> y;
		int n=x.size(),m=y.size();

		for(j=0;j<=n;j++) for(k=0;k<=m;k++) dp[j][k]=0;

		for(j=1;j<=n;j++){
			for(k=1;k<=m;k++){
				if(x[j-1]==y[k-1]) dp[j][k]=dp[j-1][k-1]+1;
				else dp[j][k]=max(dp[j][k-1],dp[j-1][k]);
			}
		}

		cout << dp[n][m] << endl;

	}

	return 0;
}