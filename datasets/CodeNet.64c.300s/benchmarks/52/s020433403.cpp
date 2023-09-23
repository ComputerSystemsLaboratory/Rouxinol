#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()

int used[10];
int rec(int n, int s, int x) {
  // cout << n << " " << s << endl;
  if (n==0) {
    if (s==0)
      return 1;
    else
      return 0;
  }
  int ret = 0;
  for(int i=x;i<10;i++) {
    if (used[i] == 0 && s-i>=0) {
      used[i] = 1;
      ret += rec(n-1, s-i, i+1);
      used[i] = 0;
    }
  }
  return ret;
}

int main() {
  int n, s;
  while(cin>>n>>s,n+s) {
    if (s>50||n>10) {
      cout << 0 << endl;
      continue;
    }
    memset(used,0,sizeof(used));
    cout << rec(n,s,0) << endl;
  }
}