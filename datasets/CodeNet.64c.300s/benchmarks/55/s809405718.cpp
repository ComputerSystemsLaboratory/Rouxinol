#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
  int input;
  int count=1;
  while(cin >> input) {
    if(input == 0) break;
    printf("Case %d: %d", count, input);
    printf("\n");
    count++;
  }
  return 0;
}