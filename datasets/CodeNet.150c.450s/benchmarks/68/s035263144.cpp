#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;

#define INF 1LL << 55
#define MAX (1LL << 31) -1
#define MOD 1000000007
typedef long long ll;
typedef pair<ll,int> P;
typedef pair<pair<int,int>,ll> p;
#define bit(n, k) ((n >> k) & 1) /*nのk bit目*/
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)
struct edge{ll to,cost,val;};
template<class T,class U>bool chmin(T&a,const U&b){if(a<=b)return false;a=b;return true;}
template<class T,class U>bool chmax(T&a,const U&b){if(a>=b)return false;a=b;return true;}
//__builtin_popcount(S);
//C.erase(unique(C.begin(),C.end()),C.end());
//#define int ll
int dx[]={1,-1,0,0},dy[]={0,0,-1,1};
//#define F function<T(T,T)>


signed main(){
    while(true){
        int n;
        cin>>n;
        if(n==0) return 0;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        int ans=MAX;
        for(int i=0;i<n-1;i++){
            chmin(ans,v[i+1]-v[i]);
        }
        cout<<ans<<endl;
    }
}
