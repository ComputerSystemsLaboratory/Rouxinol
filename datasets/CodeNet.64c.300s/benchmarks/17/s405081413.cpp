// {{{ include
#include <cstdio>
#include <cmath>
#include <cstring>
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
// }}}

using namespace std;

typedef long long ll;
inline int in(){int x;scanf("%d",&x);return x;}

inline int getPrice(int p, int x){ return p * (100 + x) / 100; }

int main()
{
  int x, y, s;
  while (x = in(), y = in(), s = in()){
    int maxi = 0;
    for (int i = 1; i < s; i++){
      for (int j = 1; j < s; j++){
        if (getPrice(i, x) + getPrice(j, x) == s){
          maxi = max(maxi, getPrice(i, y) + getPrice(j, y));
        }
      }
    }
    cout << maxi << endl;
  }

  return 0;
}