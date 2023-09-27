#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
typedef pair<ll,ll> P;
using VP = vector<P>; using VVP = vector<VP>;
using VI = vector<ll>; using VVI = vector<VI>; using VVVI = vector<VVI>;
const int inf=1e9+7;
const ll INF=1LL<<61;
const ll mod=1e9+7;

template<class T>
inline bool chmax(T &a, T b) {
    if(a < b) {
        a = b;
        return true;
    }
    return false;
}

template<class T>
inline bool chmin(T &a, T b) {
    if(a > b) {
        a = b;
        return true;
    }
    return false;
}

int r,c;

int bitcountr(int x){
    int cnt=0;
    for(int i=0;i<r;i++){
        cnt+=((x>>i)&1);
    }
    return cnt;
}

int main(){
    int i,j;
    while(1){
        cin>>r>>c;
        if(r==0) break;
        VI a(c,0);
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                int x;
                cin>>x;
                a[j]+=x<<i;
            }
        }
        int ans=0;
        for(i=0;i<(1<<(r-1));i++){
            int cnt=0;
            for(j=0;j<c;j++){
                cnt+=max(bitcountr(a[j]^i),r-bitcountr(a[j]^i));
            }
            //cout<<cnt<<" "<<i<<endl; 
            ans=max(ans,cnt);
        }
        cout<<ans<<endl;
        
    }

}
