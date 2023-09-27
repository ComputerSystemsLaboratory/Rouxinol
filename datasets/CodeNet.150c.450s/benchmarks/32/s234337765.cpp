#include <iostream>
#include <vector>
using namespace std;

int main(){
  int m, mi, ma;
  while(cin >> m >> mi >> ma, m){
    vector<int> P(m);
    for(int i = 0; i < m; ++i) cin >> P[i];
    int g = -1, ans = -1;
    for(int i = mi; i <= ma; ++i){
      if(P[i-1] - P[i] < g) continue;
      g = P[i-1] - P[i];
      ans = i;
    }
    cout << ans << endl;
  }
}

