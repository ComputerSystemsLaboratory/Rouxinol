#include<iostream>
#include<queue>
using namespace std;

int main(){
  int H, W;
  char X[100][100];

  while(true){
  cin >> H >> W;
  if(H==0&&W==0) break;
  for(int i=0; i<H; i++){
    cin >> X[i];
  }

  char used[100][100];
  for(int i=0; i<H; i++){
    for(int j=0; j<W; j++){
      used[i][j] = 0;
    }
  }

  int dx[] = {-1,0,1,0};
  int dy[] = {0,1,0,-1};
  int res = 0;
  for(int i=0; i<H; i++){
    for(int j=0; j<W; j++){
      if(used[i][j]) continue;
      res++;
      used[i][j] = 1;
      queue<pair<int, int> > que;
      que.push(make_pair(i,j));
      while(!que.empty()){
        int k = que.front().first;
        int l = que.front().second;
        que.pop();
        for(int n=0; n<4; n++){
          if(0<=k+dx[n]&&k+dx[n]<H&&
             0<=l+dy[n]&&l+dy[n]<W&&
             X[k+dx[n]][l+dy[n]] == X[i][j] && !used[k+dx[n]][l+dy[n]]){
            used[k+dx[n]][l+dy[n]] = 1;
            que.push(make_pair(k+dx[n],l+dy[n]));
            //cout << i << ' ' << j << ' ' << k+dx[n] << ' ' << l+dy[n] << endl;
          }
        }
      }
    }
  }

  cout << res << endl;
  }

  return 0;
}