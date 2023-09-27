#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <cmath>
#include <cstring>
#include <cstdlib>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n) for(int i=0;i<(int)(n);++i)
#define REP(i,j,k) for(int i=j;i<(int)(k);++i)
#define foreach(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();++i)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
typedef long long ll;
const int INF = 99999999;
const double EPS = 1e-9;

const int MAX_N=1000001;
int n;
int dp[MAX_N][2];

int main()
{
        rep(i,MAX_N)rep(j,2) dp[i][j]=INF;
        dp[0][0]=dp[0][1]=0;
        rep(i,MAX_N)for(int j=1;i+(j*(j+1)*(j+2)/6)<MAX_N;++j){
                dp[i+(j*(j+1)*(j+2)/6)][0]=min(dp[i][0]+1,dp[i+(j*(j+1)*(j+2)/6)][0]);
                if((j*(j+1)*(j+2)/6)&1) dp[i+(j*(j+1)*(j+2)/6)][1]
                                                                        = min(dp[i][1]+1,dp[i+(j*(j+1)*(j+2)/6)][1]);
        }

        while(cin >> n,n) cout << dp[n][0] << " " << dp[n][1] << endl;
        return 0;
}