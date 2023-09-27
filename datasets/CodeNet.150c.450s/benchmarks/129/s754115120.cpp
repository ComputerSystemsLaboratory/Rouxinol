//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_7_C
#include <iostream>
using namespace std;

int main(){

  int r,c;
  cin >> r >> c;
  int sheet[r+1][c+1];

  for(int i = 0; i <= r; i++){
    for(int j = 0; j <= c; j++){
      sheet[i][j] = 0;
    }
  }

  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      cin >> sheet[i][j];
    }
  }
  //?????\

/*
  //??????????¨?????¨????
  for(int i = 0; i < r; i++){
    int sum = 0;
    for(int j = 0; j < c; j++){
      sum += sheet[i][j];
    }
    sheet[i][c+1] = sum;
  }

  //??????????¨?????¨????
  for(int j = 0; j < c; j++){
    sum = 0;
    for(int i = 0; i < r; i++){
      sum += sheet[i][j];
    }
    sheet[r+1][j] = sum;
  }

  sum =0;
  for(int j = 0; j < c; j++){
    for(int i = 0; i < r; i++){
      sum += sheet[i][j];
    }
  }
*/

  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
        sheet[i][c] += sheet[i][j];
        sheet[r][j] += sheet[i][j];
        sheet[r][c] += sheet[i][j];
    }
  }
  for(int i = 0; i < r+1; i++){
    for(int j = 0; j < c; j++){
      cout << sheet[i][j] << " ";
    }
    cout << sheet[i][c] << endl;
    }
}