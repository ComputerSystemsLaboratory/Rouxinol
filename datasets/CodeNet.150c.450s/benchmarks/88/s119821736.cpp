#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <bitset>
#include <cstring>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define CLR(mat) memset(mat, 0, sizeof(mat))
typedef long long ll;

int main()
{
  int h, w;
  while(cin >> h >> w, h || w) {
    int answ = 150, ansh = 150;
    FOR(ww, 2, 151) {
      FOR(hh, 1, ww) {
        if(ww * ww + hh * hh > w * w + h * h) {
          if(answ * answ + ansh * ansh > ww * ww + hh * hh) {
            answ = ww;
            ansh = hh;
          } else if(answ * answ + ansh * ansh == ww * ww + hh * hh && ansh > hh) {
            answ = ww;
            ansh = hh;
          }
        } else if(ww * ww + hh * hh == w * w + h * h && hh > h) {
          if(answ * answ + ansh * ansh > ww * ww + hh * hh) {
            answ = ww;
            ansh = hh;
          } else if(answ * answ + ansh * ansh == ww * ww + hh * hh && ansh > hh) {
            answ = ww;
            ansh = hh;
          }
        }
      }
    }
    cout << ansh << " " << answ << endl;
  }
  return 0;
}