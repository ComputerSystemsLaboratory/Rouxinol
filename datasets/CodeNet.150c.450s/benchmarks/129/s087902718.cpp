#include <iostream>
using namespace std;

int main(){

 int r, c, t[101][101] = {};

 cin >> r >> c;

 for (int i = 0; i < r; i++) {
  for (int j = 0; j < c; j++) {
   cin >> t[i][j];
   t[r][j] += t[i][j];
   t[i][c] += t[i][j];
  }
  t[r][c] += t[i][c];
 }

 for (int i = 0; i <= r; i++) {
  for (int j = 0; j < c; j++) {
   cout << t[i][j] << " ";
  }
  cout << t[i][c] << endl;
 }
 
 return 0;
}