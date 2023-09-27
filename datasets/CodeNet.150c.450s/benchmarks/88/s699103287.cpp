#include <bits/stdc++.h>
using namespace std;

int main(void){
  int h, w;
  while(cin >> h >> w, h | w){
    int init_taitai = h*h + w*w;
    int taitai = h*h + w*w;
    int ansh = 0, answ = 0;
    while(1){
      for(int nh = 1; nh <= sqrt(taitai)+1; nh++){
        for(int nw = sqrt(taitai)+1; nw > nh; nw--){
          int ntaitai = nw*nw + nh*nh;
          if(taitai == ntaitai){
            if(taitai == init_taitai && h < nh){
              ansh = nh; answ = nw;
            }else if(taitai == init_taitai){
              continue;
            }else{
              ansh = nh; answ = nw;
            }
          }
          if(ansh != 0 && answ != 0) break;
        }
        if(ansh != 0 && answ != 0) break;
      }
      if(ansh != 0 && answ != 0) break;
      taitai++;
    }
    cout << ansh << " "<< answ << endl;
  }
  return 0;
}