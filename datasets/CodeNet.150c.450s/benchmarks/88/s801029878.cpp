#include <iostream>
using namespace std;

bool cmp(int ha, int wa, int hb, int wb){
  int pa = ha * ha + wa * wa;
  int pb = hb * hb + wb * wb;
  if(pa < pb) return true;
  if(pa > pb) return false;
  return ha < hb;
}

int main(){
  int h, w;

  while(cin >> h >> w, h || w){
    int ansH = 999, ansW = 999;

    for(int H = 1; H <= 150; H++){
      for(int W = H + 1; W <= 150; W++){
        if(H == h && W == w) continue;
        if(!cmp(h, w, H, W)) continue;
        if(!cmp(H, W, ansH, ansW)) continue;
        ansH = H;
        ansW = W;
      }
    }
    cout << ansH << " " << ansW << endl;
  }
}