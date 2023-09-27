#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
  for(;;) {
    int n;
    cin >> n;
    if(n == 0) break;
    int xs[n];
    int ys[n];
    xs[0] = 0;
    ys[0] = 0;
    int dxs[] = {-1, 0, 1, 0};
    int dys[] = {0, -1, 0, 1};
    int mxx = 0;
    int mnx = 0;
    int mxy = 0;
    int mny = 0;
    for(int i = 0; i < n - 1; i++) {
      int ni, di;
      cin >> ni >> di;
      xs[i+1] = xs[ni] + dxs[di];
      ys[i+1] = ys[ni] + dys[di];
      if(mxx < xs[i+1]) mxx = xs[i+1];
      if(mnx > xs[i+1]) mnx = xs[i+1];
      if(mxy < ys[i+1]) mxy = ys[i+1];
      if(mny > ys[i+1]) mny = ys[i+1];
    }
    cout << (mxx - mnx + 1) << " " << (mxy - mny + 1) << endl;
  }
  return 0;
}