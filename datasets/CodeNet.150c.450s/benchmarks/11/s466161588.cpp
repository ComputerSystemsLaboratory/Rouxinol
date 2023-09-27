#include<cstdio>
#include<iostream>
using namespace std;

#define ll long long
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

char sep[2] = {' ', '\n'};

int main() {
  int i, j, k, n, m;
  char s;
  bool card[4][13] = {};
  char suite[5] = "SHCD";

  cin >> n;
  rep(i, n) {
    cin >> s >> m;
    m--;
    if (s == 'S') j = 0;
    else if (s == 'H') j = 1;
    else if (s == 'C') j = 2;
    else j = 3;
    card[j][m] = true;
  }
  rep(i, 4) rep(j, 13) if (!card[i][j]) cout << suite[i] << " " << j + 1 << "\n";
  cout << flush;

  return 0;
}
  