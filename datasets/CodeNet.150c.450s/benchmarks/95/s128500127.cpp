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

int main()
{
  int n;
  while (n = in()){
    bool ground = true;
    bool F[2] = {false, false};
    int cnt = 0;
    for (int i = 0; i < n; i++){
      string S;
      cin >> S;
      F[S[0] == 'r'] = S[1] == 'u';
      if (F[0] == ground && F[1] == ground) {
        cnt++;
        ground = !ground;
      }
    }
    cout << cnt << endl;
  }

  return 0;
}