#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<stack>
#include<queue>
#include<sstream>
#include<string>
#include<set>
#include<array>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i);
#define UNIQUE(a) a.erase(unique(ALL(a)), a.end())

using namespace std;

int dx[4] = {1, 0, -1, 0};//{1,0,-1,0,1,1,-1,-1};//8??????
int dy[4] = {0, 1, 0, -1};//{0,1,0,-1,-1,1,1,-1};//8??????

int px;
int py;
int cnt;
int xr,yr;
vector<string> field;

int dfs(int x, int y) {
  //(x, y) ????????????????????????????????????
    
    if(yr<=y || xr<=x || 0>x || 0>y) return 0;
    if(field[y][x]=='#') return 0;
    if(field[y][x]=='.' || field[y][x]=='@') {field[y][x]='#';cnt++;}
    // ??¨???4??????????????????
    for(int r = 0; r < 4; r++) {
      int nx = x + dx[r];
      int ny = y + dy[r];
      dfs(nx, ny);
    }
  return 0;
}

int main(){

 while(1){
    int x,y;
    cin >> x >> y;
    if(x==0 && y==0) break;
    xr=x; yr=y;
    field.clear(); 
    cnt=0;
    rep(i,y){
      string str;
      cin >> str;
      rep(j,str.size()){
        if(str[j]=='@'){
          px=j;
          py=i;
        }
      }
      field.push_back(str);
    }
   dfs(px,py);
   
   cout << cnt << endl;
  }
}