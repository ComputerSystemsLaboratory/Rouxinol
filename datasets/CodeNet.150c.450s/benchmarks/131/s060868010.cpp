#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[])
{
  for(;;) {
    int a, l;
    cin >> a >> l;
    if(a == 0 && l == 0) break;
    vector<int> ss(l);
    vector<int> done(2000000, -1);
    for(int k = 0; ; k++) {
      if(done[a] >= 0) {
        cout << done[a] << " " << a << " " << k - done[a] << endl;
        break;
      }
      done[a] = k;
      for(int i = 0; i < l; i++) {
        ss[i] = a%10;
        a /= 10;
      }
      sort(ss.begin(), ss.end());
      int x = 0, y = 0;
      for(int i = 0; i < l; i++) {
        x = x * 10 + ss[i];
        y = y * 10 + ss[l-1-i];
      }
      a = y - x;
    }
  }
  return 0;
}