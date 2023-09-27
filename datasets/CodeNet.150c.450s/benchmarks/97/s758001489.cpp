#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int n;
struct PLACE{
  int r;
  int l;
  int u;
  int d;
};

void solve(){
  PLACE place[n+1];
  int target,cmd;
  // 0を基準としそれよりもどのくらい離れているか
  int maxR = 0;
  int maxL = 0;
  int maxU = 0;
  int maxD = 0;
  place[0].l = 0;
  place[0].r = 0;
  place[0].u = 0;
  place[0].d = 0;
  for(int i = 1; i < n; i++){
    cin >> target >> cmd;
    switch (cmd) {
      case 0://Left
        place[i].l = place[target].l + 1;
        place[i].r = place[target].r - 1;
        place[i].u = place[target].u;
        place[i].d = place[target].d;
        maxL = max(place[i].l,maxL);
        break;
      case 1://Down
        place[i].l = place[target].l;
        place[i].r = place[target].r;
        place[i].u = place[target].u - 1;
        place[i].d = place[target].d + 1;
        maxD = max(place[i].d,maxD);
        break;
      case 2://Right
        place[i].l = place[target].l -1;
        place[i].r = place[target].r + 1;
        place[i].u = place[target].u;
        place[i].d = place[target].d;
        maxR = max(place[i].r,maxR);
        break;
      case 3://Up
        place[i].u = place[target].u + 1;
        place[i].l = place[target].l;
        place[i].r = place[target].r;
        place[i].d = place[target].d - 1;
        maxU = max(place[i].u,maxU);
        break;
    }
  }
  int Hight = maxU + maxD + 1;
  int Width = maxR + maxL + 1;
  cout << Width  << " " << Hight<< endl;
}


int main(){
  while(true){
    cin >> n;
    if(n == 0) break;
    solve();
  }

  return 0;
}

