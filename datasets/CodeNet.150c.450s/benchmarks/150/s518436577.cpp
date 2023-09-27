#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

int a[2000001],sum[2000001];
int ans[2000001];
int main(){
    int n;
    cin>>n;
    rep(i,n){
        cin>>a[i];
        ++sum[a[i]];
    }
    rep(i,2000000) sum[i+1]+=sum[i];
    for(int i=n-1;i>=0;--i){
        ans[sum[a[i]]]=a[i];
        --sum[a[i]];
    }
    FOR(i,1,n+1) cout<<ans[i]<<(i==n?"":" ");
    cout<<endl;
    return 0;
}
