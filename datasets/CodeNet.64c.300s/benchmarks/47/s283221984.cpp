#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
  int x,data[101] = {0},top;

  while(cin >> x) {
    data[x]++;
  }

  top = *max_element(data,data+101);

  for(int i=1;i<101;i++) {
    if(data[i] == top)
     cout << i << endl;
  }
}