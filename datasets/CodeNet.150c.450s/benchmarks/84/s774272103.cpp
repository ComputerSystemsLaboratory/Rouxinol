#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb emplace_back
#define INF (1e9+1)
//#define INF (1LL<<59)


ll solve_inversion(vector<int> &v){
    if(v.size()==1)return 0;
    
    vector<int> a(v.begin(),v.begin()+v.size()/2);
    vector<int> b(v.begin()+v.size()/2,v.end());
    
    ll cnt = solve_inversion(a) + solve_inversion(b);
    
    int l=0,r=0,p=0;
    int nl = a.size(), nr = b.size();

    while(1){
        if(l==nl && r==nr)break;
        if(r==nr || (l<nl && a[l]<=b[r])){
            v[p++]=a[l++];
        }else{
            cnt+=nl-l;
            v[p++]=b[r++];
        }
    }
    
    return cnt;
}

signed main(){
    int n;
    cin>>n;
    vector<int> v(n);
    rep(i,n)scanf("%d",&v[i]);
    
    cout<<solve_inversion(v)<<endl;
}