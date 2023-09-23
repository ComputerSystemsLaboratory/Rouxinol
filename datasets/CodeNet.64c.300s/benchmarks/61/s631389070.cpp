#include<iostream>
using namespace std;

int main(){
  int r, c, el,sheet[102][102], r_sum, c_sum, sum = 0;

  cin >> r >> c;

  for(int i = 1; i <= r; i++){
    for(int j = 1; j <= c; j++){
      cin >> el;
      sum += el;
      sheet[i][j] = el;
    }
  }

  for(int i = 1; i <= r; i++){
    r_sum = 0;
    for(int j = 1; j <= c; j++){
      r_sum += sheet[i][j];
    }
    sheet[i][c + 1] = r_sum;
  }

  for(int i = 1; i <= c; i++){
    c_sum = 0;
    for(int j = 1; j <= r; j++){
      c_sum += sheet[j][i];
    }
    sheet[r + 1][i] = c_sum;
  }

  sheet[ r + 1][ c + 1 ] = sum;

  for(int i = 1; i <= r + 1; i++){
    for(int j = 1; j <= c + 1; j++){
      if( j == c + 1) cout << sheet[i][j] << endl;
      else cout << sheet[i][j] << ' ';
    }
  }

  return 0;
}