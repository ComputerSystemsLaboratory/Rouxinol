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
  int n, m;
  while (n = in(), m = in(), n || m){
    vector<int> ns = inpt<int>(n);
    vector<int> ms = inpt<int>(m);
    int nt = acum(ns);
    int mt = acum(ms);
    sort(ns);
    sort(ms);

    const int INF = 1e9;
    int mini = INF;
    pair<int, int> p;
    for (int i = 0; i < n; i++){
      for (int j = 0; j < m; j++){
        if (mt + ns[i] - ms[j] != nt - ns[i] + ms[j]) continue;
        int t = ms[j] + ns[i];
        if (mini < t) continue;
        mini = t;
        p = make_pair(ns[i], ms[j]);
      }
    }
    if (mini == INF){
      puts("-1");
    }
    else {
      cout << p.first << " " << p.second << endl;
    }
  }

  return (0);
}