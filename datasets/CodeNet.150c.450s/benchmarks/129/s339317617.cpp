#include<bits/stdc++.h>
using namespace std;

int main() {
  int r,c;
  cin >> r >> c;
  int table[101][101] = {0};
  for(int a = 0; a < r; ++a) {
    for(int b = 0; b < c; ++b) {
      cin >> table[a][b];
    }
  }
 for (int tate = 0; tate < r; ++tate) {
  for (int yoko = 0; yoko < c; ++yoko) {
    table[tate][c] += table[tate][yoko];
    table[r][yoko] += table[tate][yoko];
  }
  table[r][c] += table[tate][c];
 }
 for(int tate = 0; tate <= r; ++tate) {
   for(int yoko = 0; yoko < c; ++yoko) {
     cout << table[tate][yoko] << " ";
   }
   cout << table[tate][c] << endl;
 }
}