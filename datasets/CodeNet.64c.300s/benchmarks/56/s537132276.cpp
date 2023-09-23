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

int main(){
  int input(n);
  rep(x, n){
    int input(y);
    int input(m);
    int input(d);
    int day = -1;

    RFOR(i, y - 1, 1){
      if(i%3 == 0) day += 20 * 10;
      else day += 20*5 + 19*5;
    }

    if(y%3 == 0){
      day += (m - 1) * 20;
    }else{
      RFOR(i, m - 1, 1){
        if(i%2 == 1) day += 20;
        else day += 19;
      }
    }

    day += d;

    p("%d", 196470 - day);
  }
}