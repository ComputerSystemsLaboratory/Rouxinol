#include <iostream>
using namespace std;

int main() {
  int n, y, m, d;
  cin>>n;
  while(n--) {
    cin>>y>>m>>d; m--,d--;
    int ans = 0;
    while(true) {
      if (y == 1000 && m == 0 && d == 0) break;
      ans++; d++;
      if ((d == 19 && m%2==1 && y%3 != 0) || d == 20) {
        m++, d = 0;
      }
      if (m == 10) {
        y++, m = 0, d = 0;
      }
    }
    cout<<ans<<endl;
  }
}