#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
#define vec vector

using namespace std;

const int inf = 1e8;

int s(int n){
    return n*(n+1)*(n+2)/6;
}
int main(){
  vec<int> d1(2e6+1, inf), d2(2e6+1, inf);
  d1[0] = d2[0] = 0;
  rep(i, 1000){
      int n = s(i+1);
      rep(j, 2e6+1){
          if(j + n < 2e6+1) {
          d1[j+n] = min(d1[j]+1, d1[j+n]);
          if(n%2==1) d2[j+n] = min(d2[j]+1, d2[j+n]);
          }
      }
  }
  int x;
  while(cin >> x, x != 0){
      cout << d1[x] <<" "<< d2[x] <<endl;
  }
}