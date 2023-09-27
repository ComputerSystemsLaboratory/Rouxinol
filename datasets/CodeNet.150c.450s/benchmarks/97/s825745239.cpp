#include <iostream>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
typedef struct _POS {
  int x, y;
} POS;
 
#define MX 10000
 
POS field[MX];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
 
int main(void) {
  int mN, mE, mS, mW;
  POS init;
  int n;
  int p, d;
   
  init.x = -1; init.y = -1;
 
  while(1) {
    cin >> n;
    if(n == 0) break;
 
    //fill(field[], field + MX, init);
    for(int i = 0; i < MX; i++) {
      field[i] = init;
    }
     
    mN = 0; mE = 0; mS = 0; mW = 0;
    field[0].x = 0; field[0].y = 0;
    int cnt = 0;
    for(int i = 1; i < n; i++) {
      cin >> p >> d;
      cnt++;
      field[cnt].x = field[p].x + dx[d];
      field[cnt].y = field[p].y + dy[d];
 
      mN = min(mN, field[cnt].y);
      mE = max(mE, field[cnt].x);
      mS = max(mS, field[cnt].y);
      mW = min(mW, field[cnt].x);
    }
 
    cout << mE - mW +1<< " " << mS - mN +1<< endl;
  }
   
  return 0;
}