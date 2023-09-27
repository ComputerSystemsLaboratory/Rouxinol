//Property Distribution
#include<bits/stdc++.h>
using namespace std;

int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};

int H, W;
vector<string> mp;

void solve(int i, int j, int c){
  if(i<0 || H<=i || j<0 || W<=j || mp[i][j]!=c)return;
  mp[i][j]='a';
  for(int k=0; k<4; k++){
    solve(i+dir[k][0], j+dir[k][1], c);
  }
}

int main(){
  while(true){
    cin >> H >> W;
    if(H==0 && W==0)break;
    mp.clear();
    for(int i=0; i<H; i++){
      string tmp;
      cin >> tmp;
      mp.push_back(tmp);
    }
    int cn=0;
    for(int i=0; i<H; i++){
      for(int j=0; j<W; j++){
        if(mp[i][j]!='a'){
          cn++;
          solve(i, j, mp[i][j]);
        }
      }
    }
    cout << cn << endl;
  }
  return 0;
}