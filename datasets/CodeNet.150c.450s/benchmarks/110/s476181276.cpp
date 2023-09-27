//Cheese
#include<bits/stdc++.h>
using namespace std;

int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};

int H, W, N;
vector<string> mp;
int goal[10][2];

int solve(int si, int sj, int gi, int gj){
  int d[1000][1000];
  queue<pair<int, int> > que;
  memset(d, -1, sizeof(d));
  que.push(pair<int, int>(si, sj));
  d[si][sj]=0;
  while(que.size()){
    pair<int, int> now=que.front(); que.pop();
    if(now.first==gi && now.second==gj)break;
    for(int i=0; i<4; i++){
      int nx=now.first+dir[i][0], ny=now.second+dir[i][1];
      if(0<=nx && nx<H && 0<=ny && ny<W && mp[nx][ny]!='X' && d[nx][ny]==-1){
        que.push(pair<int, int>(nx, ny));
        d[nx][ny]=d[now.first][now.second]+1;
      }
    }
  }
  return d[gi][gj];
}

int main(){
  cin >> H >> W >> N;
  for(int i=0; i<H; i++){
    string s;
    cin >> s;
    mp.push_back(s);
  }
  for(int i=0; i<H; i++){
    for(int j=0; j<W; j++){
      if(mp[i][j]=='S'){goal[0][0]=i; goal[0][1]=j;}
      if('1'<=mp[i][j] && mp[i][j]<='9'){goal[mp[i][j]-'0'][0]=i; goal[mp[i][j]-'0'][1]=j;}
    }
  }
  int ans=0;
  for(int i=0; i<N; i++){
    ans+=solve(goal[i][0], goal[i][1], goal[i+1][0], goal[i+1][1]);
  }
  cout << ans << endl;
  return 0;
}