#include<cstdio>
#include<iostream>
#include<cctype>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

#define ll long long
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define MD 1000000007

char sep[3] = " \n";
int i, j, k, l, m, n;
double PI = acos(-1);


class Dice{
  int t;
 public:
  int s[6];

  Dice() {
    rep(i,6) cin >> s[i];
  }

  void N() { t=s[0], s[0]=s[1], s[1]=s[5], s[5]=s[4], s[4]=t; }
  void S() { t=s[0], s[0]=s[4], s[4]=s[5], s[5]=s[1], s[1]=t; }
  void E() { t=s[0], s[0]=s[3], s[3]=s[5], s[5]=s[2], s[2]=t; }
  void W() { t=s[0], s[0]=s[2], s[2]=s[5], s[5]=s[3], s[3]=t; }
};

int main() {
  int init[6];
  Dice* d = new Dice();
  string move;
  cin >> move;
  for (char c: move) {
    if (c == 'N') d->N();
    else if (c == 'E') d->E();
    else if (c == 'W') d->W();
    else if (c == 'S') d->S();
  }
  cout << d->s[0] << endl;
  
  return 0;
}
  