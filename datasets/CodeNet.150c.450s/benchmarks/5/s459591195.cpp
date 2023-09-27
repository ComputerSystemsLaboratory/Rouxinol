#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int sz;
  scanf("%d", &sz);
  int i;
  vector<int> n;
  while(cin >> i) {
    n.push_back(i);
  }

  int s = n.size();

  for(i = 0; i < s; i++) {
    printf("%d", n[s - i - 1]);
    if(i < s - 1) printf(" ");
  }
  printf("\n");
  return 0;
}