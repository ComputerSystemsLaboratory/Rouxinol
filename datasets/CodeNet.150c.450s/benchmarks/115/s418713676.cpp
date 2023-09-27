#include <bits/stdc++.h>
using namespace std;

int main() {
  int q; cin >> q;
  string A, B;
  for (int i=0; i<q; i++) {
    cin >> A >> B;
    vector<vector<int>> LCS(A.length()+1, vector<int>(B.length()+1,0));
    int ans=0;
    for (int j=0; j<A.length(); j++) {
      for (int k=0; k<B.length(); k++) {
        if(A[j]==B[k]) LCS[j+1][k+1]=LCS[j][k]+1;
        else LCS[j+1][k+1]=max(LCS[j][k+1],LCS[j+1][k]);
        ans = max(ans, LCS[j+1][k+1]);
      }
    }
    cout << ans << "\n";
  }
}


