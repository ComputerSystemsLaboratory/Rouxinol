#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int x, y, n, cnt = 0;
  cin >> x >> y >> n;
  for (int i = x; i <= y; i++) {
    if (n % i == 0) {
      cnt++;
    }
  }
  cout << cnt << endl;
}