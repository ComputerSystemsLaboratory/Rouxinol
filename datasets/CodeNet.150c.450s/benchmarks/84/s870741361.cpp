#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
using ll = long long ;
using P = pair<int,int> ;
using pll = pair<long long,long long>;
using vc = pair<ll,vector<ll>>;
constexpr int INF = 1e9;
constexpr long long LINF = 1e17;
constexpr int MOD = 1000000007;
int n = 200005;
vector<int> a(n);

vc count(int l,int r){
    if(l+1 == r) return vc(0,{a[l]});
    if(l+2==r){
        if(a[l]<a[l+1]){
            return vc(0,{a[l],a[l+1]});
        }else{
            return vc(1,{a[l+1],a[l]});
        }
    }

    vc vc1 = count(l,(l+r)/2);
    vc vc2 = count((l+r)/2,r);
    vector<ll> V1 = vc1.second;
    vector<ll> V2 = vc2.second;

    ll res = 0;
    vector<ll> V;

    res += vc1.first + vc2.first;

    int j = 0;
    for(int i=0;i<V1.size();i++){
        if(j!=V2.size()){
            while(V2[j] < V1[i]){
                V.push_back(V2[j]);
                ++j;
                if(j==V2.size()) break;
            }
        }

        V.push_back(V1[i]);
        res += j;
    }

    while(j < V2.size()){
        V.push_back(V2[j]);
        ++j;
    }

    return vc(res,V);
}

int main(){
    cin >> n;
    rep(i,n) cin >> a[i];
    vc ans = count(0,n);
    cout << ans.first << endl;
    /*
    rep(i,n){
        cout << ans.second[i] << " ";
    }
    */
    return 0;
}
