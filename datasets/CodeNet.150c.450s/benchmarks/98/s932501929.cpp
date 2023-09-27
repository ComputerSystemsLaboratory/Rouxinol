#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>

#define FOR(i, f, n) for(int (i) = (f); (i) < (n); (i)++)
#define RFOR(i, f, n) for(int (i) = (f); (i) >= (n); (i)--)
#define REP(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define RREP(i, n) for(int (i) = (n); (i) >= 0; (i)--)
#define rep(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define rrep(i, n) for(int (i) = (n); (i) >= 0; (i)++)
#define p(...) printf(__VA_ARGS__); cout << endl;
#define input(x) x; cin >> x;
#define list_input(x, n) x[(n)]; for(int (i) = 0; (i) < (n); (i)++) cin >> x[i];
#define lambda(a, b, c) [](const a, const b){ return c ;}
#define key(t, x, compare) [](const t& a, const t& b){ return a x compare b x ;}

using namespace std;

int sum(int *a, int n){
  int r = 0;
  rep(i, n){
    r += a[i];
  }
  return r;
}

bool maina(){
  int input(n);
  int input(m);
  if(n == 0 &&  m == 0) return false;
  int list_input(t, n);
  int list_input(h, m);

  rep(i, n){
    rep(j, m){
      int tmp = h[j];
      h[j] = t[i];
      t[i] = tmp;
      if(sum(h, m) == sum(t, n)){
        p("%d %d", h[j], t[i]);
        goto GOAL;
      }
      tmp = t[i];
      t[i] = h[j];
      h[j] = tmp;
    }
  }
  p("%d", -1) return true;

GOAL:
  return true;
}

int main(){
  while(maina());
}