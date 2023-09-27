#include <iostream>
#include <string>

#include <cstring>

using namespace std;
 
int main(){
   
  int r, c;
 
  cin >> r >> c;
 
  int sheet[r+1][c+1];
   
  memset(sheet, 0, sizeof sheet);
 
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      cin >> sheet[i][j];
    }
  }
 
  for(int i = 0; i < r+1; i++){
    for(int j = 0; j < c+1; j++){
      cout << sheet[i][j];
      if(j < c){
    cout << " ";
      }else{
    cout << endl;
      }
      if(i < r){
    sheet[r][j] += sheet[i][j];
    sheet[i][c] += sheet[i][j];
      }
    }
  }
 
  return 0;
}