#include<iostream>
#include<cstring>
using namespace std;

int w,h;
int d[20][20]; //y,x
int n;
int a,b;
int ans;

void solve(int x,int y){

  if(d[y][x] == -1) return;

  if(y == h && w == x){
    ans++;
    return;
  }

  if(x > w || y > h) return;

  solve(x+1,y);
  solve(x,y+1);

}

int main(){

  while(true){
    cin >> w >> h;
    if(!w && !h) break;

    memset(d,0,sizeof(d));
    ans = 0;

    cin >> n;
    for(int i=0;i<n;i++){
      cin >> a >> b;
      d[b][a] = -1;
    }

    solve(1,1);

    cout << ans << endl;

  }
  
}