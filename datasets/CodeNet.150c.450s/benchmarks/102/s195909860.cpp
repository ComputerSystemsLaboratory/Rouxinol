#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> VI;
typedef vector<VI> VVI;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = numeric_limits<int>::max() / 2;
const int NEG_INF = numeric_limits<int>::min() / 2;

char tiles[21][21];
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
int ans=0;
int w,h;

void dfs(int x,int y){
    tiles[x][y]='#';
    ans++;

    for(int i=0;i<4;i++){
        int nx=x+dx[i],ny=y+dy[i];

        if(0<=nx && nx<w && 0<=ny && ny<h &&
          tiles[nx][ny] == '.') dfs(nx,ny);
    }
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  while(true){
    for(int i=0;i<21;i++){
      for(int j=0;j<21;j++){
        tiles[i][j]='#';
      }
    }
    ans=0;
    cin >> w >> h;
    if(w==0) break;
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
        cin >> tiles[j][i];
      }
    }
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
        if(tiles[j][i]=='@') dfs(j,i);
      }
    }
    cout << ans << endl;
  }
}