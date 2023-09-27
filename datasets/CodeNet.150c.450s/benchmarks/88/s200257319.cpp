#include <bits/stdc++.h>
using namespace std;
int main(){
  while (1){
    int h, w;
    cin >> h >> w;
    if (h == 0 && w == 0){
      break;
    }
    int H = 101;
    int W = 101;
    for (int i = 1; i <= 150; i++){
      for (int j = i + 1; j <= 150; j++){
        if (i * i + j * j > h * h + w * w || i * i + j * j == h * h + w * w && i > h){
          if (H * H + W * W > i * i + j * j || H * H + W * W == i * i + j * j && H > i){
            H = i;
            W = j;
          }
        }
      }
    }
    cout << H << ' ' << W << endl;
  }
}
