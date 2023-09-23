#include<cstdio>
#include<iostream>
using namespace std;

#define ll long long
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

char sep[2] = {' ', '\n'};

int main() {
  int i, j, k;
  int n;
  int a[110];

  cin >> n;
  rep(i, n) cin >> a[n - i - 1];
  rep(i, n) cout << a[i] << sep[(i == n - 1)];
  cout << flush;
  
  return 0;
}
  