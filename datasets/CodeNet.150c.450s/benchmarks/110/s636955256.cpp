#include<bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0;i<n;++i)
string s[1010];
int chy[10], chx[10]; //cheese
int d[1010][1010]; //min time
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int h, w, n, ans;

void bfs(){
  REP(i,n){
    int sy = chy[i], sx = chx[i];
    int gy = chy[i+1], gx = chx[i+1];
    queue<int> qy, qx;
    
    qy.push(sy); qx.push(sx);
    REP(j,h) REP(k,w) d[j][k] = 1e9; //new check
    d[sy][sx] = 0; //first time

    while(!qy.empty()){
      int posy = qy.front(); qy.pop();
      int posx = qx.front(); qx.pop();
      if(posy == gy && posx == gx){
        ans += d[gy][gx];
        break;
      }
      REP(j,4){
        int y = posy + dy[j], x = posx + dx[j];
        if(y < 0 || h <= y || x < 0 || w <= x){ //not allowed range
          continue;
        }
        if(d[y][x] == 1e9 && s[y][x] != 'X'){
          d[y][x] = d[posy][posx] + 1; //previous time + 1
          qy.push(y); qx.push(x);
        }
      }
    }
  }
}
int main(){
  cin>>h>>w>>n;
  REP(i, h){
    cin>>s[i];
    
    REP(j, w){
      if(s[i][j] == 'S'){
        chy[0] = i;
        chx[0] = j;
      }else if('1' <= s[i][j] && s[i][j] <= '9'){
        chy[s[i][j] - '0'] = i;
        chx[s[i][j] - '0'] = j;
      }
    }
  }    
  bfs();
  cout<<ans<<endl;
  return 0;
}