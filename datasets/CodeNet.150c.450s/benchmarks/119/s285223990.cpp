#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

int c[51][51];
bool used[51][51];
const int dx[]={-1,-1,-1,0,0,1,1,1},dy[]={1,0,-1,1,-1,1,0,-1};
int main(){
    int w,h;
    while(cin>>w>>h,w|h){
        int cnt=0;
        memset(used,0,sizeof(used));
        rep(i,h)rep(j,w) cin>>c[i][j];
        rep(i,h)rep(j,w)if(!used[i][j]&&c[i][j]==1){
            ++cnt;
        queue<pair<pint,int> > q;
        q.push({{j,i},0});
        used[i][j]=true;
        while(!q.empty()){
            pair<pint,int> pi=q.front();q.pop();
            rep(k,8){
                int tx=pi.first.first+dx[k],ty=pi.first.second+dy[k];
                if(tx>=0&&ty>=0&&tx<w&&ty<h&&c[ty][tx]==1&&!used[ty][tx]){
                    q.push({{tx,ty},pi.second+1});
                    used[ty][tx]=true;
                }
            }
        }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
