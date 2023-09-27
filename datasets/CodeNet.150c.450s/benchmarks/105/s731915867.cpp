
// Problem : A - Xor Battle
// Contest : AtCoder - AtCoder Grand Contest 045
// URL : https://atcoder.jp/contests/agc045/tasks/agc045_a
// Memory Limit : 1024 MB
// Time Limit : 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>

typedef long long ll;
const int MN = 60;

int n;
ll a[205];
char s[205];

namespace base{
ll a[61], tmp[61];
bool flag;

void ins(ll x){
    for(int i=MN;~i;i--)
        if(x&(1ll<<i)) {
            if(!a[i]){a[i]=x;return;}
            else x^=a[i];
            }
    flag=true;
}
bool check(ll x){
    for(int i=MN;~i;i--)
        if(x&(1ll<<i)) {
            if(!a[i])return false;
            else x^=a[i];
            }
    return true;
}
}

using base::ins;
using base::check;

int main() {
  int T; scanf("%d", &T);
  while (T--) {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) scanf("%lld", &a[i]);
    scanf("%s", s + 1);
    if (s[n] == '1') { puts("1"); continue; }
    memset(base::a, 0, sizeof(base::a));
    memset(base::tmp, 0, sizeof(base::tmp));
    base::flag = 0;
    bool is_1 = 0;
    for (int i = n; i; --i) {
      if (s[i] == '1') {
        if (!check(a[i])) {
          puts("1");
          is_1 = 1;
          break;
        }
      } else ins(a[i]);
    }
    if (!is_1) puts("0");
    //long long t[2]; t[0] = t[1] = 0;
    //for (int i = 1; i <= n; ++i) t[s[i] - '0'] |= a[i];
    //if (t[0] != t[1]) puts("1"); else puts("0");
  }
  return 0;
}