#include<iostream>
using namespace std;

// #include<cstdio>

int main(){
  int r, c;
  int m[101][101]={};
  cin >> r >> c;
  for (int i=0; i<r; i++){
    for (int j=0; j<c; j++){
      cin >> m[i][j];
      m[i][c]+=m[i][j];
      m[r][j]+=m[i][j];
      m[r][c]+=m[i][j];
    }
  }
  

  for (int i=0; i<=r; i++){
    for (int j=0; j<=c; j++){
      cout << m[i][j];
      if (j==c) continue;
      cout << ' ';
    }
    cout << "\n";
  }

  return 0;
}