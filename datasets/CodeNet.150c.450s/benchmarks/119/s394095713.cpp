#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<math.h>
#include<complex>
#include<queue>
#include<deque>
#include<stack>
#include<map>
#include<set>
#include<bitset>
#include<functional>
#include<assert.h>
#include<numeric>
using namespace std;
#define REP(i,m,n) for(int i=(int)(m) ; i < (int) (n) ; ++i )
#define rep(i,n) REP(i,0,n)
using ll = long long;
const int inf=1e9+7;
const ll longinf=1LL<<60 ;
const ll mod=1e9+7 ;

bool used[55][55];
int h,w;
int a[55][55];
void dfs(int x,int y){
    REP(i,-1,2)REP(j,-1,2){
        int nx=x+i,ny=y+j;
        if(nx<0||nx>=h||ny<0||ny>=w)continue;
        if(used[nx][ny]||a[nx][ny]==0)continue;
        used[nx][ny]=1;
        dfs(nx,ny);
    }
}

void solve(){
    rep(i,h)rep(j,w)cin>>a[i][j];
    rep(i,h)rep(j,w)used[i][j]=false;
    int ans=0;
    rep(i,h)rep(j,w){
        if(used[i][j]||a[i][j]==0)continue;
        ++ans;
        used[i][j]=1;
        dfs(i,j);
    }
    cout<<ans<<endl;
}
int main(){
    while(cin>>w>>h,w!=0)solve();
    return 0;
}
