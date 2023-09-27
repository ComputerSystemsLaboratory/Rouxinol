#include<algorithm>
#include<functional>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<sstream>
#include<iostream>
#include<iomanip>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<bitset>
#include<climits>

#define all(c) (c).begin(), (c).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define FOR(itr,data) for(__typeof((data).begin()) itr=(data).begin();itr!=(data).end();++itr)
#define pb(e) push_back(e)
#define mp(a, b) make_pair(a, b)
#define fr first
#define sc second

typedef unsigned long long UInt64;
typedef long long Int64;

const int INF=100000000;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

using namespace std;

typedef pair<int ,int > P;

int n;
int a[101];

//何項目,今の値,かな...
//

long long dp[103][23];



int main()
{
    cin>>n;
    rep(i,n) cin>>a[i];
    rep(i,103) rep(j,23) dp[i][j]=0;

    dp[1][a[0]] = 1;

    rep(i,n-1) {
        rep(j,23) {
            if(j+a[i]<=20) {
                dp[i+1][j+a[i]] += dp[i][j];
            }
            if(j-a[i]>=0) {
                dp[i+1][j-a[i]] += dp[i][j];
            }
        }
    }

    cout<<dp[n-1][a[n-1]]<<endl;


    return 0;
}