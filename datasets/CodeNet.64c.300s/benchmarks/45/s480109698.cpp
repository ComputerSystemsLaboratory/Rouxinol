#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char *argv[])
{
  for(;;) {
    int n, m, p;
    cin >> n >> m >> p;
    if(n == 0) break;
    m--;
    int s = 0;
    int mx = 0;
    for(int i = 0; i < n; i++) {
      int x;
      cin >> x;
      s += x;
      if(i == m) {
        mx = x;
      }
    }
    s *= (100-p);
    cout << (mx == 0 ? 0 : (s/mx)) << endl;
  }
  return 0;
}

