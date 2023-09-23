#include <bits/stdc++.h>

using namespace std;
typedef pair<int,int> p;

int main(void){
  int n,a,b,c;
  cin >> n;
  int v[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      v[i][j]=0;
    }
  }
  for(int i=0;i<n;i++){
    cin >> a >> b;
    for(int j=0;j<b;j++){
      cin >> c;
      v[a-1][c-1]=1;
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(v[i][j]!=1)cout << 0;
      else cout << v[i][j];
      if(j!=n-1)cout << ' ';
    }
    cout << endl;
  }
  return 0;
}