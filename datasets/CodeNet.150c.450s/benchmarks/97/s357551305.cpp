#include <bits/stdc++.h>
#define ll long long
#define INF 1000000005
#define MOD 1000000007
#define EPS 1e-10
#define rep(i,n) for(int i=0;i<(int)n;++i)
#define each(a, b) for(auto (a): (b))
#define all(v) (v).begin(),(v).end()
#define fi first
#define se second
#define pb push_back
#define show(x) cout <<#x<<" = "<<(x)<<endl
#define spair(p) cout <<#p<<": "<<p.fi<<" "<<p.se<<endl
#define svec(v) cout<<#v<<":";rep(i,v.size())cout<<" "<<v[i];cout<<endl
#define sset(s) cout<<#s<<":";each(i,s)cout <<" "<<i;cout<<endl

using namespace std;

typedef pair<int,int>P;

const int dx[] = {-1,0,1,0};
const int dy[] = {0,-1,0,1};

int lx,ly,tx,ty;

void dfs(int u,int v,map<P,int>& mp)
{
    mp[P(u,v)]++;
    lx = min(lx,u),ly = min(ly,v),tx = max(tx,u),ty = max(ty,v);
    rep(i,4){
        int nu = u + dx[i],nv = v + dy[i];
        if(mp[P(nu,nv)] == 1){
            dfs(nu,nv,mp);
        }
    }
}

int main()
{
    while(1){
        int n;
        cin >> n;
        if(n == 0){
            break;
        }
        map<P,int> mp;
        lx = ly = INF;
        tx = ty = -INF;
        vector<P> vec;
        vec.pb(P(0,0));
        mp[P(0,0)] = 1;
        rep(i,n-1){
            int x,y;
            cin >> x >> y;
            vec.pb(P(vec[x].fi+dx[y],vec[x].se+dy[y]));
            mp[P(vec[x].fi+dx[y],vec[x].se+dy[y])] = 1;
        }
        dfs(0,0,mp);
        cout << tx-lx+1 << " " << ty-ly+1 << "\n";
    }
}