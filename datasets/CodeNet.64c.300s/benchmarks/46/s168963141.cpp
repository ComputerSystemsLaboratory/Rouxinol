#include <iostream>
#include <utility>
#include <string>
#include <cstring>
#include <vector>
#include <map>
#include <algorithm>
#include <stack>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); ++i)

const int INF = 1 << 28;

int main()
{
  int a, d, n;
  while(cin >> a >> d >> n, (a|d|n) ) {
    int idx = 0;
    for(int i = a; ; i += d) {
      bool flag = true;
      flag &= i > 1;
      for(int j = 2; j * j <= i; ++j) {
        flag &= i % j != 0;
      }
      if( flag ) {
        if( ++idx == n ) {
          cout << i << endl;
          break;
       }
      }
    }
  }
  return 0;
}