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
int i, j, k, n, m, l;


void shuffle(string s) {
  char buf[20010];
  l = s.size();
  rep(i,l) buf[i] = s[i];
  int h = 0;
  cin >> n;
  rep(i,n) {
    cin >> m;
    rep(j,m) buf[h+l+j] = buf[h+j];
    h+=m;
  }
  REP(i,h,h+l) printf("%c", buf[i]);
  printf("\n");
}

int main() {
  string s;
  while(true) {
    cin >> s;
    if (s == "-") break;
    shuffle(s);
  }

  return 0;
}
  