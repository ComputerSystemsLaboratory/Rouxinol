#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <queue>

#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int main() {
  while(1){
    int w,h;
    cin>>w>>h;
    if(!w)break;
    vector<string> t(h);
    REP(i,h)cin>>t[i];
    int si,sj;
    REP(i,h)REP(j,w){
      if(t[i][j] == '@'){
        si = i;
        sj = j;
      }
    }
    vector<vector<bool>> vis(h,vector<bool>(w,false));
    vis[si][sj] = true;
    queue<pair<int,int>> q;
    q.push(make_pair(si,sj));
    while(!q.empty()){
      auto p = q.front();q.pop();
      int i,j;
      tie(i,j) = p;
      int di[] = {1,0,-1,0};
      int dj[] = {0,1,0,-1};
      REP(k,4){
        int ni=i+di[k];
        int nj=j+dj[k];
        if(ni<0||ni>=h||nj<0|nj>=w)continue;
        if(t[ni][nj] == '#')continue;
        if(vis[ni][nj]) continue;
        q.push(make_pair(ni,nj));
        vis[ni][nj] = true;
      }
    }
    int cnt = 0;
    REP(i,h)REP(j,w){
      if(vis[i][j])++cnt;
    }
    cout << cnt << endl;
  }
  return 0;
}