#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define see(x) cout<< #x <<" = "<< x <<' ';
#define seen(x) cout<< #x <<" = "<< x <<'\n';
#define UWU cout<<'\n';
deque<ll> Q;
vector<ll> g[200005];
map<ll,ll> mp,sign;
void ThangPhanB(ll x){
    mp[x] = 1;
    Q.push_back(x);
    while(!Q.empty()){
        int k = Q.front();
        Q.pop_front();
        for(auto i : g[k]){
            if(mp[i] == 0){
                mp[i] = 1;
                sign[i] = k;
                Q.push_back(i);
            }
        }
    }
}

int main(){
//ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,m,x,y;cin>>n>>m;

    for(int i = 0 ; i < m ; ++i){
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }
    ThangPhanB(1);
    int cnt = 0;
    for(int i = 2 ; i <= n ; ++i){
        if(mp[i] == 1) cnt++;
    }
    if(cnt != n - 1) cout<<"No";
    else{
        cout<<"Yes";UWU;
        for(int i = 2 ; i <= n ; ++i){
        cout<<sign[i];UWU;
    }
    }

}
