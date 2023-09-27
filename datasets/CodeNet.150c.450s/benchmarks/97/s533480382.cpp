#include <bits/stdc++.h>
using namespace std;

#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))

typedef long long LL;

struct xy{
  int x;
  int y;
};

int main(){
  int vecx[4] = {-1,0,1,0};
  int vecy[4] = {0,1,0,-1};
  int N;
  int kijun;
  int houkou;
  int minx,miny,maxx,maxy;
  while(1){
    cin >> N;
    if(N==0) return 0;
    vector<struct xy> seihoukei(N);
    seihoukei[0].x=seihoukei[0].y=0;
    minx=miny=maxx=maxy=0;
    for(int i=1;i<N;i++){
      cin >> kijun >> houkou;
      seihoukei[i].x=seihoukei[kijun].x+vecx[houkou];
      seihoukei[i].y=seihoukei[kijun].y+vecy[houkou];
      minx=min(minx,seihoukei[i].x);
      maxx=max(maxx,seihoukei[i].x);
      miny=min(miny,seihoukei[i].y);
      maxy=max(maxy,seihoukei[i].y);
    }
    cout << maxx-minx+1 << " " << maxy-miny+1 << endl;
  }
  return 0;
}

