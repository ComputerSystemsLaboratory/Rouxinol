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
int i, j, k, l, m, n;

int main() {
  string s, p, q;
  int a, b;
  char t;
  cin >> s >> n;
  rep(i,n) {
    cin >> q >> a >> b;
    if (q == "print") {
      REP(j,a,b+1) printf("%c", s[j]);
      printf("\n");
    } else if (q == "reverse") {
      rep(j,(b-a+1)/2) t=s[a+j],s[a+j]=s[b-j],s[b-j]=t;
    } else if (q == "replace") {
      cin >> p;
      s.replace(a, b-a+1, p);
    }
  }

  return 0;
}
  