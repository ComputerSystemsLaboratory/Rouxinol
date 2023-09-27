#include<iostream>

using namespace std;

int main(int argc, char *argv[])
{
  for(int t = 1;; t++) {
    int h;
    cin >> h;
    if(h == 0) break;
    int fld[h][5];
    for(int i = 0; i < h; i++) {
      for(int j = 0; j < 5; j++) {
        cin >> fld[i][j];
      }
    }
    auto print = [&]{
      for(int i = 0; i < h; i++) {
        for(int j = 0; j < 5; j++) {
          cerr << fld[i][j] << " ";
        }
        cerr << endl;
      }
      cerr << endl;
    };
      //if(t == 149) { cerr << h << endl; print(); }
    int sc = 0;
    for(;;) {
      bool vanished = false;
      //print();
      for(int i = 0; i < h; i++) {
        for(int j = 0; j < 3; j++) {
          int c = fld[i][j];
          if(c > 0) {
            int k = j + 1;
            for(; k < 5; k++) {
              if(fld[i][k] != c) break;
            }
            if(k - j >= 3) {
              vanished = true;
              for(int l = j; l < k; l++) {
                sc += fld[i][l];
                fld[i][l] = 0;
              }
            }
          }
        }
      }
      if(!vanished) break;
      for(int j = 0; j < 5; j++) {
        int ii = h - 1;
        int i = h - 1;
        for(;;) {
          while(fld[i][j] == 0 && i >= 0) i--;
          if(i < 0) break;
          fld[ii--][j] = fld[i--][j];
        }
        for(; ii >= 0; ii--) {
          fld[ii][j] = 0;
        }
      }
    }
    cout << sc << endl;
  }
  return 0;
}