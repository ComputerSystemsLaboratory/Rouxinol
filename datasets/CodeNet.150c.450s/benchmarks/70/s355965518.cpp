#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()

int main() {
  int hoge[] = {31,29,31,30,31,30,31,31,30,31,30,31};
  string s[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

  int foo[12][31];
  int dd = 3;
  for (int i=0; i<12; i++) {
    for (int j=0; j<hoge[i]; j++) {
      foo[i][j] = dd%7;
      dd++;
    }
  }
  
  int m, d;
  while(cin >> m >> d, m+d) {
    cout << s[foo[m-1][d-1]] << endl;
  }
}