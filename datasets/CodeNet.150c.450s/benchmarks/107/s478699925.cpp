#include <bits/stdc++.h>
using namespace std;


int main() {
  string A, B; cin >> A >> B;
  int a=A.length(), b=B.length();
  vector<vector<int>> Dist(a+1, vector<int>(b+1,0));
  for (int i=0; i<=a; i++) Dist[i][0] = i;
  for (int i=0; i<=b; i++) Dist[0][i] = i;
  for (int i=0; i<a; i++) {
    for (int j=0; j<b; j++) {
      Dist[i+1][j+1]= min({Dist[i+1][j]+1,Dist[i][j+1]+1,Dist[i][j]+(A[i]!=B[j])});
    }
  }
  cout << Dist[a][b] << "\n";
}
