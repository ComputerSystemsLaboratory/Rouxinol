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
  Solver(vector<int> bs) : bs(bs) {}
  bool solve(int it=0, int a=0, int b=0){
    if (it == bs.size()) return true;
    if (a < bs[it] && solve(it + 1, bs[it], b)) return true;
    if (b < bs[it] && solve(it + 1, a, bs[it])) return true;
    return false;
  }
  vector<int> bs;
};

int main()
{
  int n = in();
  for (int i = 0; i < n; i++){
    vector<int> bs;
    for (int j = 0; j < 10; j++){
      bs.push_back(in());
    }
    Solver solver(bs);
    if (solver.solve()) puts("YES");
    else puts("NO");
  }
  return (0);
}