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
  string s, t;
  int taro = 0, hanako = 0;
  cin >> n;
  rep(i,n) {
    cin >> s >> t;
    if (s > t) taro += 3;
    else if (s < t) hanako += 3;
    else taro++, hanako++;
  }
  cout << taro << " " << hanako << endl;

  return 0;
}
  