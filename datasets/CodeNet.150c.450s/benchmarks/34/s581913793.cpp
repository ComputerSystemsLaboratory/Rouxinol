#include <iostream>
using namespace std;

int main() {
  int n;
  int step[31] = {1,1,2};
  for(int i=3;i<31;i++) {
    step[i] = step[i-1]+step[i-2]+step[i-3];
  }
  while(cin >> n) {
    if(n==0) break;
    cout << (step[n]+3650)/3650 << endl;
  }
}