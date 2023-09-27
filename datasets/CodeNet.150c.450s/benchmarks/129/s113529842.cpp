#include<iostream>
using namespace std;

int main(){
  int r,c,i,j;
  int table[101][101] = {0};

  cin >> r >> c;
  for(i = 0; i < r; i++){
    for(j = 0; j < c; j++){
      cin >> table[i][j];
    }
  }
  for(i = 0; i < r; i++){
    for(j = 0; j < c; j++){
      table[i][c] += table[i][j];
      table[r][j] += table[i][j];
    }
  }
  for(i = 0; i < r; i++){
      table[r][c] += table[i][c];
  }
  for(i = 0; i <= r; i++){
    for(j = 0; j < c; j++){
      cout << table[i][j] << " ";
    }
    cout << table[i][c] << endl;
  }
  return 0;
}