#include <iostream>
#include<vector>
using namespace std;
#define rep(i,x) for(int i=1; i<=(x); i++)

int main(){
  int n;
  cin >> n;

  int room[5][4][11];
  rep(i,4) rep(j,3) rep(k,10) room[i][j][k] = 0;
  rep(i,n){
    int b,f,r,v;
    cin >> b >> f >> r >> v;
    room[b][f][r] += v;
  }

  rep(i,4){
    rep(j,3){
      rep(k,10){
        cout << " " << room[i][j][k];
      }
      cout << endl;
    }
    if(i<4){
      rep(m,20) cout << "#";
      cout << endl;
    }
  }

  return 0;
}
  

