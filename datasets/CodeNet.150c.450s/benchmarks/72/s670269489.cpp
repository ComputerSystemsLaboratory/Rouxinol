#include<cstdio>
#include<iostream>
#include<cctype>
using namespace std;

#define ll long long
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define MD 1000000007

char sep[2] = {' ', '\n'};

int main() {
  int i, j, k, n, m, l;
  char c;

  while(true) {
    scanf("%c", &c);
    if (!isalpha(c)) printf("%c", c);
    else if (isupper(c)) printf("%c", tolower(c));
    else if (islower(c)) printf("%c", toupper(c));
    else exit(255);
    if (c == '\n') break;
  }

  return 0;
}
  