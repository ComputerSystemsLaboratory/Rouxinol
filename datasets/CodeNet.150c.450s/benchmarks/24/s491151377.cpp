#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i<int(n);++i)
#define all(a) a.begin(),a.end()
using ll = long long;

int main(){
    int n,m;
    while(cin>>n>>m,n|m){
        using P = pair<ll,ll>;
        vector<P> ps(n);
        rep(i,n){
            ll d,p;
            cin>>d>>p;
            ps[i] = {p,d};
        }
        sort(all(ps), greater<P>());
        ll res = 0;
        rep(i,n){
            ll d = ps[i].second;
            ll p = ps[i].first;
            if(m>=d){
                m-=d;
            }else{
                res += (d-m)*p;
                m = 0;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
