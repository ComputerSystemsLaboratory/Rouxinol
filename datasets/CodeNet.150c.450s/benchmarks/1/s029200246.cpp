
#include <bits/stdc++.h>

#define PI 3.141592653
#define rep(i,a,n) for(int i=a;i<(int)n;++i)
#define SZ(x) ((int)(x).size())	//size() unsigned -> int
#define descSort(a) sort(a.begin(),a.end(),std::greater<int>())
using namespace std;
typedef long long ll;
const ll INF = 1e9 + 7;
ll gcd(ll x,ll y){
    if(x%y==0)return y;
    return gcd(y,x%y);
}
int main(void){
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,0,n)cin>>a[i];
    vector<int> dp(n,INF);
    rep(i,0,n){
        *lower_bound(dp.begin(),dp.end(),a[i])=a[i];
    }
    cout<<lower_bound(dp.begin(),dp.end(),INF)-dp.begin()<<endl;
    return 0;
}
