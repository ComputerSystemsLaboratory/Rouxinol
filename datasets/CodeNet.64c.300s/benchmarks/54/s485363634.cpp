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

long long dfs(int _a,int _b) {

    if(_a==n-1) {
        if(_b == a[n-1]) {
            return 1;
        }
        else {
            return 0;
        }
    }
    if(dp[_a][_b]!=-1) return dp[_a][_b];

    long long res = 0;

    if(a[_a]+_b<=20) {
        res+=dfs(_a+1,a[_a]+_b);
    }
    if(0<=_b - a[_a]) {
        res += dfs(_a+1,_b-a[_a]);
    }

    return dp[_a][_b]=res;

}

int main()
{
    cin>>n;
    rep(i,n) cin>>a[i];
    rep(i,103) rep(j,23) dp[i][j]=-1;

    cout<<dfs(1,a[0])<<endl;


    return 0;
}