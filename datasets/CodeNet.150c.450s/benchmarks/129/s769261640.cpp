#include <iostream>
using namespace std;

int main(){
  int r, c;
  cin >> r >> c;

  int mat[101][101]={};

  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        cin >> mat[i][j];
        mat[i][c]+=mat[i][j];
        mat[r][j]+=mat[i][j];
        mat[r][c]+=mat[i][j];
    }
  }

  for(int i=0; i<r+1; i++){
    for(int j=0; j<c+1; j++){
      if(j==c) cout << mat[i][j] << endl;
      else cout << mat[i][j] << " ";
    }
  }
}

