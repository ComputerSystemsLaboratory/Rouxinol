#include <bits/stdc++.h>

using namespace std;

#define TEMP_T template<typename T>
TEMP_T void sort(T& v){ sort(v.begin(), v.end()); }
TEMP_T void revs(T& v){ reverse(v.begin(), v.end()); }
TEMP_T void uniq(T& v){ sort(v); v.erase(unique(v.begin(), v.end())); }
TEMP_T void show(T& v, char delim=' ', char end='\n'){ for(int i=0; i<v.size()-1; i++) cout << v[i] << delim; cout << v[v.size()-1] << end; }
TEMP_T T    cums(T& v){ T r; r.push_back(v[0]); for(int i=1; i<v.size(); i++) r.push_back(r[i-1] + v[i]); return r; }
TEMP_T void maxe(T& v, T m){ v = max(v, m); }
TEMP_T void mine(T& v, T m){ v = min(v, m); }

static inline int in(){ int x; scanf("%d", &x); return x; }

struct Solver {
  int pattern[64];
  int n;
  Solver(int n) : n(n) {
    memset(pattern, 0, sizeof(pattern));
  }
  void solve(int it=0, int c=0, int s=0){
    if (it == 10){
      if (c == n){
        pattern[s]++;
      }
      return;
    }
    solve(it + 1, c + 1, s + it);
    solve(it + 1, c, s);
  }
};

int main()
{
  int n, s;
  while (n = in(), s = in(), !(n == 0 && s == 0)){
    Solver solver(n);
    solver.solve();
    if (s < 64){
      printf("%d\n", solver.pattern[s]);
    }
    else puts("0");
  }

  return 0;
}