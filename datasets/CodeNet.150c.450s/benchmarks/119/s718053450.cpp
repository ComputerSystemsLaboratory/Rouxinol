#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<queue>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<cstdlib>
using namespace std;
#define REP(i,a,n) for(int i = a ; i < n ; i++)
#define rep(i,n) REP(i,0,n)

typedef long long ll;

int w,h;
int t[52][52];
int dx[] = {-1,0,1,-1,1,-1,0,1};
int dy[] = {-1,-1,-1,0,0,1,1,1};


void solve(int x,int y){
  t[y][x] = 0;
  rep(i,8){
    int nx = x + dx[i];
    int ny = y + dy[i];
    if(w>nx && nx>=0 && h>ny && ny>=0 && t[ny][nx]){
      solve(nx,ny);
    }
  }
}

int main(){
  while(cin>>w>>h,w||h){
    rep(i,h){
      rep(j,w){
        cin>>t[i][j];
      }
    }

    int cnt = 0;
    rep(i,h){
      rep(j,w){
        if(t[i][j]){
          solve(j,i);
          cnt++;
        }
      }
    }
    cout<<cnt<<endl;
  }
}