#include<bits/stdc++.h>
using namespace std;
int main(){
  int r,c,l=0,s=0;
  int ans[101][101];
  cin >> r >> c;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin >> ans[i][j];
      s += ans[i][j];
    }
    ans[i][c] = s;
    s=0;
  }
  for(int j=0;j<=c;j++){
    for(int i=0;i<r;i++){
      l += ans[i][j];
    }
  ans[r][j] = l;
  l = 0;
}
  for(int i = 0;i<=r;i++){
    for(int j = 0;j<=c;j++){
      cout << ans[i][j];
      if(j!=c) cout << " ";
      else cout << endl;
    }
    
  }
}

