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
int d[]={1,0,-1,0,1};

void solve(int w,int h){
    string s[h];
    rep(i,h)cin>>s[i];
    int sx,sy;
    rep(i,h)rep(j,w)if(s[i][j]=='@')sx=i,sy=j;
    queue<pair<int,int>> que;
    que.emplace(sx,sy);
    vector<vector<int>> used(h,vector<int>(w));
    used[sx][sy]=1;
    int ans=1;
    while(que.size()){
        int x=que.front().first,y=que.front().second;
        que.pop();
        rep(i,4){
            int nx=x+d[i],ny=y+d[i+1];
            if(nx<0||nx>=h||ny<0||ny>=w)continue;
            if(used[nx][ny]||s[nx][ny]=='#')continue;
            ++ans;
            used[nx][ny]=1;
            que.emplace(nx,ny);
        }
    }
    cout<<ans<<endl;
}


int main(){
    int n,m;
    while(cin>>n>>m,n!=0)solve(n,m);
    return 0;
}
