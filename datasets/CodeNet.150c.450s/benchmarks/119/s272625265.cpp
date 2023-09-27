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

int tiles[51][51];
int w,h;

void dfs(int x,int y){
    tiles[x][y]=0;

    for(int dx=-1;dx<=1;dx++){
      for(int dy=-1;dy<=1;dy++){
        int nx=x+dx,ny=y+dy;

        if(0<=nx && nx<w && 0<=ny && ny<h &&
          tiles[nx][ny] == 1) dfs(nx,ny);
        }
    }
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  while(true){
    for(int i=0;i<51;i++){
      for(int j=0;j<51;j++){
        tiles[i][j]=0;
      }
    }
    int ans=0;
    cin >> w >> h;
    if(w==0) break;
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
        cin >> tiles[j][i];
      }
    }
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
        if(tiles[j][i]==1){
           dfs(j,i);
           ans++;
         }
      }
    }
    cout << ans << endl;
  }
}