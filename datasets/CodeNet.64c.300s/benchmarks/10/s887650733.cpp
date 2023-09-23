#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
  int x,y;
  int tmp;
  while(cin >> x >> y) {
    if(x == 0 && y == 0) break;
    if(x > y) {
      tmp = x;
      x = y;
      y = tmp;
    }
    printf("%d %d\n",x, y);
  }
}