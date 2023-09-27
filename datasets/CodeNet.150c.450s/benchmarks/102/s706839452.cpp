#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

// #define ll long long
#define vvi vector< vector<int> >
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back

int w,h,fx,fy;
char ban[30][30];
int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};

bool inrange(int px,int py){
  if(px<0||py<0||px>=h||py>=w) return false;
  else return true;
}
int bsearch(int px,int py){
  int cnt = 0;
  REP(i,4){
    int nx = px+ dx[i]; int ny = py+dy[i];
    if(!inrange(nx,ny)) continue;
    if(ban[nx][ny]=='#') continue;
    //cnt++;
    //cout << nx << " " <<ny<<endl;
    if(ban[nx][ny]=='.'){
      ban[nx][ny]='!';
      cnt++;
      cnt += bsearch(nx,ny);
    }
  }
  return cnt;
}

int main(){
  while(1){
    cin >> w >> h;
    if((w==0)&&(h==0)) break;
    REP(i,h){
      char buf[21];
      cin >> buf;
      REP(j,w) {
        ban[i][j] = buf[j];
        if(ban[i][j] == '@'){
          fx = i; fy = j;
        }
      }
    } 
    cout << bsearch(fx,fy)+1 << endl;
  }
  return 0;
}