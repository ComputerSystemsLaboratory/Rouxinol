#include <bits/stdc++.h>

using namespace std;

#define TEMP_T template<typename T>
TEMP_T void sort(T& v){ sort(v.begin(), v.end()); }
TEMP_T void revs(T& v){ reverse(v.begin(), v.end()); }
TEMP_T void uniq(T& v){ sort(v); v.erase(unique(v.begin(), v.end()), v.end()); }
TEMP_T T    cums(T& v){ T r(v.size()); partial_sum(v.begin(), v.end(), r); return r; }
TEMP_T void show(T& v, char delim=' ', char end='\n'){ for(int i=0; i<v.size()-1; i++) cout << v[i] << delim; cout << v[v.size()-1] << end; }
TEMP_T T    acum(vector<T>& v, T b=0){ return accumulate(v.begin(), v.end(), b); }
TEMP_T vector<T> inpt(int n){ vector<T> v(n); for (int i=0; i<n; i++) cin >> v[i]; return v; }

static inline int in(){ int x; scanf("%d", &x); return x; }
static const int dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
static const int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};

struct Field {
  Field(int w, int h) : w(w), h(h) {}
  bool invalid(int x, int y){ return x < 0 || w <= x || y < 0 || h <= y; }
  const int w, h;
};

struct Solver {
  Solver(){}
  int solve(){
  }
};

int main()
{
  vector<int> vs = inpt<int>(5);
  sort(vs);
  revs(vs);
  show(vs);
  return (0);
}