#include<iostream>
#include<string.h>

using namespace std;

#define MAX_NUM 100

int main(void) {
  int table[MAX_NUM + 1][MAX_NUM + 1];
  int row, column, target;
  int sum4Row = 0;
  int sum4Column[MAX_NUM + 1];
  cin >> row;
  cin >> column;
  memset(table, 0, sizeof(table));
  memset(sum4Column, 0, sizeof(sum4Column));

  for(int i = 0; i < row; i++) {
    for(int j = 0; j < column; j++) {
      cin >> target;
      table[i][j] = target;
      sum4Column[j] += target;    
      sum4Row += target;
    }
    table[i][column] = sum4Row;
    sum4Row = 0;
  }

  for(int i = 0; i < row; i++) {
    for(int j = 0; j < column + 1; j++) {
      if(j == column) { 
        cout << table[i][j];
      }
      else {
        cout << table[i][j] << " ";
      }
    }
    cout << endl;
  }
  int sum4Final = 0;
  for(int i = 0; i < column; i++) {
    cout << sum4Column[i] << " ";
    sum4Final += sum4Column[i];
  }
  cout << sum4Final << endl;
  
  return 0;
}