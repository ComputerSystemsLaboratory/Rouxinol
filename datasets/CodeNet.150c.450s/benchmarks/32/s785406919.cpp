#include <bits/stdc++.h>

using namespace std;

int main()
{
  int m, n[2];
  while(cin >> m >> n[0] >> n[1], m || n[0] || n[1]){
    int P[200];
    for(int i = 0; i < m; i++) cin >> P[i];
    int idx = n[0];
    for(int i = n[0]; i <= n[1]; i++){
      if(P[i-1] - P[i] >= P[idx-1] - P[idx]) idx = i;
    }
    cout << idx << endl;
  }
  return 0;
}