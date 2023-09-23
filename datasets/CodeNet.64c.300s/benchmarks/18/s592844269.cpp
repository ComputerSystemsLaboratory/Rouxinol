#include <iostream>
using namespace std;

int main() {
  int data[30];
  data[0] = 1;
  data[1] = 2;
  data[2] = 4;
  for(int i = 3; i < 30; i++) {
    data[i] = data[i-3] + data[i-2] + data[i-1];
  }
  while(1) {
    int n;
    cin >> n;
    if(n == 0) break;

    cout << ( (data[n-1]+10)/10 -1 )/ 365 + 1 << endl;
  }
  return 0;
}