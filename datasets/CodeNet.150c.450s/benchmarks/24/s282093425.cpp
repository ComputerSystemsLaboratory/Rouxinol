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
typedef pair<int, int> P;
inline int in(){int x;scanf("%d",&x);return x;}

int main()
{
  int N, M;
  while (N = in(), M = in(), N || M){
    vector<P> D;
    for (int i = 0; i < N; i++){
      int d = in(), p = in();
      D.push_back(P(-p, -d));
    }
    sort(begin(D), end(D));
    int ans = 0;
    for (const auto& Di : D){
      M += Di.second;
      if (M < 0) {
        ans += M * Di.first;
        M = 0;
      }
    }
    cout << ans << endl;
  }

  return 0;
}