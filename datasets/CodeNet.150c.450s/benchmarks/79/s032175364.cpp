#include <bits/stdc++.h>

using namespace std;

#define TEMP_T template<typename T>
TEMP_T void sort(T& v){ sort(v.begin(), v.end()); }
TEMP_T void revs(T& v){ reverse(v.begin(), v.end()); }
TEMP_T void uniq(T& v){ sort(v); v.erase(unique(v.begin(), v.end()), v.end()); }
TEMP_T T    cums(T& v){ T r(v.size()); partial_sum(v.begin(), v.end(), r.begin()); return r; }
TEMP_T void show(T& v, char delim=' ', char end='\n'){ for(int i=0; i<v.size()-1; i++) cout << v[i] << delim; cout << v[v.size()-1] << end; }
TEMP_T T    acum(vector<T>& v, T b=0){ return accumulate(v.begin(), v.end(), b); }
TEMP_T vector<T> inpt(int n){ vector<T> v(n); for (int i=0; i<n; i++) cin >> v[i]; return v; }

static inline int in(){ int x; scanf("%d", &x); return x; }

int main()
{
  int n, r;
  while (n = in(), r = in(), n || r){
    deque<int> d(n);
    for (int i = 0; i < n; i++) d[i] = i;
    revs(d);
    for (int i = 0; i < r; i++){
      int p, c;
      p = in() - 1;
      c = in();
      deque<int> buf;
      for (int i = 0; i < c; i++){
        buf.push_front(d[p + i]);
      }
      d.erase(d.begin() + p, d.begin() + p + c);
      for (int i = 0; i < c; i++){
        d.push_front(buf[i]);
      }
    }
    cout << d[0] + 1 << endl;
  }
  return (0);
}