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

int pat[7][5] = {
  {1, 2, 4, 3, 1},
  {0, 3, 5, 2, 0},
  {0, 1, 5, 4, 0},
  {0, 4, 5, 1, 0},
  {0, 2, 5, 3, 0},
  {2, 1, 3, 4, 2}
};
int d[6];

int idx(int x) {
  int i;
  rep(i,6) if (d[i]==x) return i;
  exit(255);
}

int main() {
  rep(i,6) cin >> d[i];
  cin >> n;
  rep(i,n) {
    int a, b;
    cin >> a >> b;
    a = idx(a), b = idx(b);
    rep(j,4) if (pat[a][j] == b) {
      cout << d[pat[a][j+1]] << endl;
    }
  }
  
  return 0;
}
  