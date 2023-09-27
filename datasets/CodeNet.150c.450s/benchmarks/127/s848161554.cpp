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

pair<string, string> split(string S, int n){
  return make_pair(S.substr(0, n), S.substr(n));
}

int main()
{
  int m = in();
  for (int i = 0; i < m; i++){
    string s;
    cin >> s;

    set<string> pat;
    for (int p = 1; p < s.size(); p++){
      string L, R;
      tie(L, R) = split(s, p);
      string rL = L, rR = R;
      reverse(begin(rL), end(rL));
      reverse(begin(rR), end(rR));
      pat.insert(L + R);
      pat.insert(L + rR);
      pat.insert(rL + R);
      pat.insert(rL + rR);
      pat.insert(R + L);
      pat.insert(R + rL);
      pat.insert(rR + L);
      pat.insert(rR + rL);
    }
    cout << pat.size() << endl;
  }

  return 0;
}