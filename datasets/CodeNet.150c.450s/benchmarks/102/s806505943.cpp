//Red and Black
#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)

int W, H;
vector<string> mp;
int dir[4][2]={{0,1},{1,0},{0,-1},{-1,0}};

void solve(int x, int y){
  if(x<0 || H<=x || y<0 || W<=y || mp[x][y]!='.')return;
  mp[x][y]='A';
  rep(i,4)solve(x+dir[i][0], y+dir[i][1]);
}

int main(){
  while(true){
    cin>>W>>H;
    if(W==0&&H==0)break;
    mp.clear();
    rep(i,H){
      string s;
      cin>>s;
      mp.push_back(s);
    }
    int sx, sy;
    rep(i,H)rep(j,W)if(mp[i][j]=='@'){sx=i; sy=j; break;}
    mp[sx][sy]='.';
    solve(sx, sy);

    int cnt=0;
    rep(i,H)rep(j,W)if(mp[i][j]=='A')cnt++;
    cout<<cnt<<endl;
  }
  return 0;
}