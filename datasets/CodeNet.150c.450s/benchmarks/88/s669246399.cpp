#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> Pi;
typedef pair<int, Pi > Ti;
#define fi first
#define se second

int main()
{
  vector< Ti > data;
  
  for(int i = 1; i <= 150; i++) {
    for(int j = i + 1; j <= 150; j++) {
      data.push_back(Ti(i * i + j * j, Pi(i, j)));
    }
  }
  sort(data.begin(), data.end());
  
  int H, W;

  while(cin >> H >> W, H || W) {
    
    Ti val = *upper_bound(data.begin(), data.end(), Ti(H * H + W * W, Pi(H, W)));
    
    cout << val.se.fi << " " << val.se.se << endl;
  }

  return 0;
}
  
  