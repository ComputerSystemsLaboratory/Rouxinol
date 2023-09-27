#include<bits/stdc++.h>
using namespace std;

int W,H;
int C[111][111];

int dx[]={1,0,-1,0,-1,-1,1,1};
int dy[]={0,1,0,-1,1,-1,1,-1};

bool used[111][111];
void solve(int x,int y){
  if( used[x][y] ) return;
  used[x][y] = true;
  for(int i=0;i<8;i++){
    int nx = x + dx[i], ny = y + dy[i];
    if( nx < 0 || ny < 0 || nx >= W || ny >= H ) continue;
    if( C[nx][ny] == 1 )
      solve( nx, ny );
  }
}

int main(){

  while(  cin >> W >> H && (W||H) ){
    for(int i=0;i<H;i++){
      for(int j=0;j<W;j++){
	cin >> C[j][i];
      }
    }
    
    int res = 0;
    memset(used,0,sizeof(used));
    for(int i=0;i<H;i++){
      for(int j=0;j<W;j++){
	if( !used[j][i] && C[j][i] == 1 )
	  {
	    res++;
	    solve(j,i);
	  }
      }
    }
    cout << res << endl;
  }


}