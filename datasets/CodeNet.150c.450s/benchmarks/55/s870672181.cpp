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

  char str[1010];

  while(true) {
    scanf("%s", str);
    int len = strlen(str);
    int z = 0;
    rep(i, len) z += str[i] - '0';
    if (z == 0) break;
    cout << z << endl;
  }

  return 0;
}
  