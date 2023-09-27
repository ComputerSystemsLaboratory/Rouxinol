#include<iostream>
using namespace std;

int main(){
  int r,c;
  cin >> r >> c;

  int sheet[r+1][c+1];
  //?????????
  for(int i = 0; i <= r; i++){
    for(int j =0; j <= c; j++){
      sheet[i][j] = 0;
    }
  }

  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      cin >> sheet[i][j];
      sheet[i][c] += sheet[i][j];
      sheet[r][j] += sheet[i][j];
    }
  }

  for(int j = 0; j < c; j++){
    sheet[r][c] += sheet[r][j];
  }

  for(int i = 0; i<=r; i++){
    for(int j = 0; j<=c; j++){
      if(j == c){
        cout << sheet[i][j] << endl;
      }
      else{
        cout << sheet[i][j] << " ";
      }
    }
  }
  return 0;
}