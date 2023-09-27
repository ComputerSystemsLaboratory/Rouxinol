#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;

#define rep(i,n) for(ll i=0;i<ll(n);i++)
#define YESNO(T) if(T){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
#define yesno(T) if(T){cout<<"yes"<<endl;}else{cout<<"no"<<endl;}
#define YesNo(T) if(T){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}

const ll INF = 1LL << 60;
const ll MOD = 1e9 + 7;
const double pi = 3.14159265358979;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n,m;
    cin >> n >> m;
    vector<vector<ll>> to(100005, vector<ll>());
    for (ll i = 0;i < m;i++){
        ll a,b;
        cin >> a >> b;
        a--; b--;

        to[a].push_back(b);
        to[b].push_back(a);
    }

    /*for (ll i = 0; i < n; i++){
        for (auto j : to[i]){
            cout << j+1 << " ";
        }
        cout << endl;
    }*/

    queue<ll> q;
    vector<ll> dist(n,INF);
    vector<ll> pre(n,-1);

    dist[0] = 0;
    q.push(0);

    while (!q.empty()){
        ll v = q.front();
        q.pop();

        for (auto u : to[v]){
            if (dist[u] != INF) continue;

            dist[u] = dist[v] +1;
            pre[u] = v;
            q.push(u);

        }
    }

    cout << "Yes" << endl;
    for (ll i = 1; i < n; i++){
        cout << pre[i] +1 << "\n";
    }
}