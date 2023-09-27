#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb emplace_back
#define INF (1e9+1)
//#define INF (1LL<<59)


int main(){
    int n;
    while(cin>>n&&n){
        int ans = INF;
        vector<int> a(n);
        rep(i,n)cin>>a[i];
        rep(i,a.size()){
            rep(j,a.size()){
                if(i==j)continue;
                ans = min(ans,abs(a[i]-a[j]));
            }
        }
        cout<<ans<<endl;
    }
}