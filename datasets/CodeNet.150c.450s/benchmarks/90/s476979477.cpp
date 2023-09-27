#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()

int main() {
  int a[101] = {0};
  int n;
  int aa = 0;
  while(cin >> n) {
    a[n]++;
    aa = max(aa,a[n]);
  }
  REP(i,101) {
    if (a[i]==aa) cout << i << endl;
  }
}