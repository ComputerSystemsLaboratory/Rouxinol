#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
 
//krishrawat
 
 
//----------------------------MACROS-------------------------------------------------
#define pb insert//                                                                 |
#define eb emplace_back//                                                           |
#define ff first//                                                                  |
#define ss second//                                                                 |
typedef long long int ll;//                                                         |
typedef long double ld;//                                                           |
#define all(a) a.begin(), a.end()//                                                 |
#define show(x) cerr << #x << " is " << x << "\n"//                                 |
#define show2(x, y) cerr << #x << " " << #y << " " << x << " " << y << "\n"//       |
typedef vector<ll> vl;//                                                            |
typedef vector<vl> vvl;//                                                           |
typedef pair<ll, ll> pp;//                                                          |
typedef vector<pp> vp;//                                                            |
typedef map<pp, ll> ipi;//                                                          |
typedef map<pp, char> ipc;//                                                        |
typedef map<ll, ll> ii;//                                                           |
typedef set<ll> sl;//                                                               |
typedef multiset<ll> msl;//                                                         |
typedef map<char, ll> ci;//                                                         |
typedef set<pair<ll, ll>> sp;//                                                     |
const ll mod = 1e9 + 7;//                                                           |
const ll N = 2e5 + 1;//                                                             |
//----------------------------------------------------------------------------------

ll fast_expo(ll x, ll y){ll res=1;while(y>0){if(y&1){res*=x;}x*=x;y>>=1;}return res;}

vl grp[N];
vl vis(N,0);
vl val(N,0);

void bfs(ll x){
    queue<ll> q;
    q.push(x);
    while(!q.empty()){
        ll f=q.front();q.pop();
        for(auto i:grp[f]){
            if(!vis[i]){
                vis[i]=1;
                val[i]=f;
                q.push(i);
            }
        }
    }
}

//solution
void solve()
{   
    ll n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        ll a,b;cin>>a>>b;
        grp[a].eb(b);
        grp[b].eb(a);
    }
    vis[1]=1;
    bfs(1);
    int f=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]) {f=1;break;}
    }
    if(f) cout<<"No\n";
    else{
        cout<<"Yes\n";
        for(int i=2;i<=n;i++){
            cout<<val[i]<<"\n";
        }
    }
}
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    
    ll t; t=1;
    //cin>>t;
    while(t--) solve(); return 0;
}
