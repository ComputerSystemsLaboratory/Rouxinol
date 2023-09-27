#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pint;
using namespace std;

int dp[100000],a[100000];
int main(){
    int n;
    cin>>n;
    rep(i,n){
        cin>>a[i];
        dp[i]=1000100010;
    }
    rep(i,n) *lower_bound(dp,dp+n,a[i])=a[i];
    cout<<lower_bound(dp,dp+n,1000100010)-dp<<endl;
    return 0;
}