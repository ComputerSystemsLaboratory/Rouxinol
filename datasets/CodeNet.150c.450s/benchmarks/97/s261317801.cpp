#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<map>
#include<set>
#include<sstream>

#define reps(i,f,n) for(int i = int(f); i <= int(n); ++i)
#define rep(i,n) reps(i,0,n-1)
#define rep2(i,j,n,m) rep(i,n)rep(j,m)
#define pii pair<int,int>
#define X first 
#define Y second

using namespace std;

const int INF = 1e9;


int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};

int main(void){
  int t;
  int n,d;
  while(1){
    vector<pii> p;
    int minx=INF, miny=INF;
    int maxx=0, maxy=0;
    cin >> t;
    if(t == 0) break;

    p.push_back(pii(250,250));

    rep(i,t-1){
      cin >> n >> d;
      p.push_back(pii(p[n].X+dx[d], p[n].Y+dy[d]));
    }
    
    rep(i, t){
      minx = min(minx, p[i].X);
      maxx = max(maxx, p[i].X);
      miny = min(miny, p[i].Y);
      maxy = max(maxy, p[i].Y);
    }

    cout << maxx-minx+1 << " " << maxy-miny+1 << endl;
  }
  return 0;
}