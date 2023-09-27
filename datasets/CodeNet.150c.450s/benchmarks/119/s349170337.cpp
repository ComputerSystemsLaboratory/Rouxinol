#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb emplace_back
#define INF (1e9+1)
//#define INF (1LL<<59)

vector<vector<int>> v;

int w,h;
void dfs(int y, int x, vector<vector<bool>> &used){
    for(int dy=-1;dy<=1;dy++){
        for(int dx=-1;dx<=1;dx++){
            if(dy==0 && dx==0)continue;
            int ddy = y+dy, ddx = x+dx;
            if(ddx<0 || ddy<0 || ddx>=w || ddy>=h)continue;
            if(v[ddy][ddx]!=1 || used[ddy][ddx]==true)continue;
            used[ddy][ddx] = true;
            dfs(ddy,ddx,used);
        }
    }
}

int main(){
    while(cin>>w>>h&&(w||h)){
        
        v.clear();
        v.resize(h,vector<int>(w));
        rep(i,h)rep(j,w)cin>>v[i][j];
        
        int ans = 0;
        vector<vector<bool>> used(h,vector<bool>(w,false));
        rep(i,h){
            rep(j,w){
                if(used[i][j]==false && v[i][j]==1){
                    used[i][j] = true;
                    dfs(i,j,used);
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
}