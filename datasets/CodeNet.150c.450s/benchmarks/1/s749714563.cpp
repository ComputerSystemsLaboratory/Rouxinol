#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1000000007;
#define INF 1LL<<30
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(x) (x).begin(),(x).end()

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];

    vector<int> dp(100010,INF);
    rep(i,n){
        *lower_bound(all(dp),a[i])=a[i];
    }
    cout<<lower_bound(all(dp),INF)-dp.begin()<<endl;
}


