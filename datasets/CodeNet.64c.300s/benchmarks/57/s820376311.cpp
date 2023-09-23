#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {

  int H, W;
  while(cin >> H >> W && (H|W)) {
    int a[W]; memset(a, 0, sizeof a);
    for(int i=0; i<H; i++)
      for(int j=0; j<W; j++) {
        int b; cin >> b;
        a[j] |= (b << i);
      }
    
    int ans = 0;
    for(int i=0; i<(1<<H); i++) {
      int tmp = 0;
      for(int j=0; j<W; j++) {
        int t1 = 0, t2 = 0;
        for(int k=0; k<H; k++) {
          t1 += (a[j] >> k & 1) ^ (i >> k & 1);
        }
        for(int k=0; k<H; k++) {
          t2 += (a[j] >> k & 1) ^ (!(i >> k & 1));
        }
        tmp += max(t1, t2);
      }
      ans = max(ans, tmp);
    }
    
    cout << ans << endl;
    
  }
  
  return 0;
}