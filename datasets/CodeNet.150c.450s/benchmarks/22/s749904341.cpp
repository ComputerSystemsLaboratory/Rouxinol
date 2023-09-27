#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vii vector<int>
#define vll vector<ll>
#define lb lower_bound
#define pb push_back
#define mp make_pair
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep2(i,a,b) for(ll i=a;i<b;i++)
#define repr(i,n) for(ll i=n-1;i>=0;i--)
#define all(x) x.begin(),x.end()
#define INF INT_MAX
#define LLINF LLONG_MAX
// #define int ll
using namespace std;
const int MOD = 1000000007;
const int MAX = 510000;

struct edge {ll from, to, cost; };

edge es[3000];
ll d[3000];
ll V,E,r;

bool find_negative_loop(){
    memset(d, 0, sizeof(d));
    rep(i,V){
        rep(j,E){
            edge e=es[j];
            if(d[e.to]> d[e.from] + e.cost){
                d[e.to] = d[e.from] + e.cost;
                if(i==V-1) return true;
            }
        }
    }
    return false;
}

bool bellmanford(ll s){
    rep(i,V) d[i]=INF;
    d[s]=0;
    rep(cnt,100010){
        bool update = false;
        rep(i,E){
            edge e=es[i];
            if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost){
                d[e.to] = d[e.from] + e.cost;
                update = true;
            }
        }
        if(cnt==V) return true; 
        if(!update) break;
    }
    return false;
}


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    cin>>V>>E>>r;
    rep(i,E){
        ll a,b,c;
        cin>>a>>b>>c;
        es[i]={a,b,c};
    }
    if(bellmanford(r)){
        cout<<"NEGATIVE CYCLE"<<endl;
        return 0;
    }
    bellmanford(r);
    rep(i,V){
        if(d[i]==INF) cout<<"INF"<<endl;
        else cout<<d[i]<<endl;
    }

    return 0;
}
