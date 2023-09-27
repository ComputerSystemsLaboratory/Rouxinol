#include <iostream>
using namespace std;

int main() {
  int num[101] = {0};
  int a;
  int maxi = 0;
  while(cin >> a) {
    maxi = max(maxi, ++num[a]);
  }
  for(int i = 0; i < 101; ++i) {
    if(num[i] == maxi) cout << i << endl;
  }
  return 0;
}