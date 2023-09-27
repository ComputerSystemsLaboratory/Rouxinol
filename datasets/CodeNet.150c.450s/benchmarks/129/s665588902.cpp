#include <iostream>
using namespace std;

int main(){
  int r, c;
  cin >> r >> c;
  int X[r+1][c+1];
  for (int i=0; i<=r; ++i){
    int sum=0;
    for (int j=0; j<=c; ++j){
      if (i==r) X[i][j] = 0;
      else if (j==c) X[i][j] = sum;
      else{
	cin >> X[i][j];
	sum += X[i][j];
      }
    }
  }
  for (int j=0; j<c; ++j){
    for (int i=0; i<r; ++i){
      X[r][j] += X[i][j];
    }
  }
  for (int j=0; j<c; ++j){
    X[r][c] += X[r][j];
  }
  for (int i=0; i<=r; ++i){
    for (int j=0; j<=c ; ++j){
      if (j==c) cout << X[i][j] << endl;
      else cout << X[i][j] << " ";
    }
  }
  return 0;
}