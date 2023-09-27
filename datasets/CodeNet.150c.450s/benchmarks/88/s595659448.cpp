#include <bits/stdc++.h>
#define int long long
#define range(i,x,y) i=(x);i<(y);i++
#define all(x) begin(x),end(x)
#define lim(x,r,l) (r<=x&&x<l)
typedef long long ll;
typedef long double ld;
using namespace std;

bool isl(int w, int h, int iw, int ih){
  return (w*w + h*h < iw*iw + ih*ih) || (
    (w*w + h*h == iw*iw + ih*ih) &&
    (h > ih)
  );
}

signed main(){
  int w; int h;
  while(cin >> w >> h, !(w == 0 && h == 0)){
    int resw = 1000;
    int resh = 1000;
    for(int iw = 1; iw < 200; iw++){
      for(int ih = iw+1; ih < 200; ih++){
        if(isl(w, h, iw, ih)){
          if(!(iw == w && ih == h)){
            if(isl(iw, ih, resw, resh)){
              resw = iw;
              resh = ih;
            }
          }
        }
      }
    }
    cout << resw << " " << resh << endl;;
  }
}