#include<iostream>
using namespace std;

int main(){
  int column, row, res;

  cin >> column >> row;

  int matrix[101][101], vector_a[101];


  for(int i = 1; i <= column; i++){
    for(int j = 1; j <= row; j++){
      cin >> matrix[i][j];
    }
  }

  for(int i = 1; i <= row; i++){
    cin >> vector_a[i];
  }

  for(int i = 1; i <= column; i++){
    res = 0;
    for(int j = 1; j <= row; j++){
      res += matrix[i][j] * vector_a[j];
    }
    cout << res << endl;
  }
  return 0;
}