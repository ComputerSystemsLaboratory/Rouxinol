#include<cstdio>
#include<iostream>
#include<cctype>
#include<cstring>
#include<algorithm>
using namespace std;

#define ll long long
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define MD 1000000007

char sep[3] = " \n";

int main() {
  int i, j, k, n, m, l;

  string s, w;

  cin >> s;
  n = 0;
  while(true) {
    cin >> w;
    if (w == "END_OF_TEXT") break;
    rep(i,w.size()) w[i] = tolower(w[i]);
    if (s == w) n++;
  }
  cout << n << endl;

  return 0;
}
  