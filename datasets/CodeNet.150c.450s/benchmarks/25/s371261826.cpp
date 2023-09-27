#include<cstdio>
#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;

#define ll long long
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define MD 1000000007

char sep[2] = {' ', '\n'};

int main() {
  int i, j, k, n, m, l;

  int x[30] = {};
  char c;
  while (cin >> c) if (isalpha(c)) x[tolower(c) - 'a']++;
  rep(i,26) printf("%c : %d\n", i + 'a', x[i]);

  return 0;
}
  