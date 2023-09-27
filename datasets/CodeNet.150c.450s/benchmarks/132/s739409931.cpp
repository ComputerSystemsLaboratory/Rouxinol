#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  for(;;) {
    int n, p;
    cin >> n >> p;
    if(n == 0) break;
    int st[n];
    for(int i = 0; i < n; i++) {
      st[i] = 0;
    }
    int c = 0;
    for(;;) {
      if(p>0) {
        st[c++]++;
        p--;
      } else {
        int nz = 0;
        for(int i = 0; i < n; i++) {
          if(st[i] != 0) nz++;
        }
        if(nz == 1) {
          cout << ((c + n - 1) % n) << endl;
          break;
        }
        p = st[c];
        st[c++] = 0;
      }
      c %= n;
    }
  }
  return 0;
}