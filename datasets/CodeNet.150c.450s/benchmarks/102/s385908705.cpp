#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(ll i=(a);i<ll(b);i++)
#define rep(i,b) loop(i,0,b)

int h,w;
char g[30][30];

int rec(int ci, int cj){
    g[ci][cj] = '#';
    int ans = 1;
    int di[] = {0,1,0,-1};
    int dj[] = {1,0,-1,0};
    rep(i,4){
        int ni = ci + di[i];
        int nj = cj + dj[i];
        if(ni >= h || nj >= w || ni < 0 || nj < 0 || g[ni][nj] == '#') continue;
        ans += rec(ni,nj);
    }
    return ans;
}

int main(){
    while(scanf("%d%d",&w,&h), w != 0){
        rep(i,h) scanf("%s",g[i]);
        int ans = 0;
        rep(i,h)rep(j,w) if(g[i][j]=='@') ans = rec(i,j);
        printf("%d\n",ans);
    }
}