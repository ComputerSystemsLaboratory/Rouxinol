#include <iostream>
#include <cstdio>
using namespace std;


int eval(int x, int y) {
  int i, j, k, cnt =0;
  for(int i = 1 ; i <= x; i++) {
  for(int j = i+1 ; j <= x; j++) {
  for(int k = j+1 ; k <= x; k++) {
    if (i + j + k == y) {
cnt++;
    }
 }
  }}
  return  cnt;
}

int main() {

 int x, y;
 while(cin >> x >> y, x + y != 0 ) {
  cout << eval(x, y) << endl;
 }

}