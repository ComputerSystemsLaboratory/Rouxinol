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
#define sint(x) cout <<#x<<" = "<<(x)<<endl
#define spair(p) cout <<#p<<": "<<p.fi<<" "<<p.se<<endl
#define svec(v) cout<<#v<<":";rep(i,v.size())cout<<" "<<v[i];cout<<endl
#define sset(s) cout<<#s<<":";each(i,s)cout <<" "<<i;cout<<endl

using namespace std;

typedef pair<int,int>P;

const int MAX_N = 52;
const int dx[] = {1,1,1,0,0,-1,-1,-1};
const int dy[] = {1,0,-1,1,-1,1,0,-1};

int flag[MAX_N][MAX_N];
int w,h;

void dfs(int u,int v)
{
    flag[u][v] = 0;
    rep(i,8){
        int nu = u + dx[i],nv = v + dy[i];
        if(0 <= nu && nu < h && 0 <= nv && nv < w && flag[nu][nv]){
            dfs(nu,nv);
        }
    }
    return;
}

int main()
{
    while(1){
        cin >> w >> h;
        if(w == 0){
            break;
        }
        rep(i,h){
            rep(j,w){
                cin >> flag[i][j];
            }
        }
        int ans = 0;
        rep(i,h){
            rep(j,w){
                if(flag[i][j] != 0){
                    dfs(i,j);
                    ans++;
                }
            }
        }
        cout << ans << "\n";
    }
}