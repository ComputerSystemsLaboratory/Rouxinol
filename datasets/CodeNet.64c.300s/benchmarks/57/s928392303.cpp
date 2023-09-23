#include <bits/stdc++.h>
using namespace std;
#define Rep(i, N) for(int i = 0; i < N; i++)

int main()
{
  int H, W;
  int mas[15][10005];
  
  while(cin >> H >> W, W || H) {
    Rep(i, H) Rep(j, W) cin >> mas[i][j];
    int maxv = 0;
    Rep(i, 1 << H) {
      int cnt = 0;
      Rep(j, W) {
	int cnts = 0;
	Rep(k, H) {
	  if((i >> k) & 1) cnts += 1 - mas[k][j];
	  else cnts += mas[k][j];
	}
	cnt += max(cnts, H - cnts);
      }
      maxv = max(maxv, cnt);
    }
    
    cout << maxv << endl;
  }
  return 0;
}