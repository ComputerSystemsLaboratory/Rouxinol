#include<cstdio>
#include<iostream>
using namespace std;

#define ll long long
#define rep(i,a,b) for(i=a;i<b;i++)
#define rep0(i,n) rep(i,0,n)
#define MD 1000000007

char sep[2] = {' ', '\n'};

int main() {
  int i, j, k, l, m, n, x, y, z;

    while(true) {
    cin >> n >> x;
    if (n == 0 && x == 0) break;
    z = 0;
    rep(i,1,n) rep(j,i+1,n) rep(k,j+1,n+1) if (i+j+k == x) z++;
    cout << z << endl;
  }
    

  return 0;
}
  