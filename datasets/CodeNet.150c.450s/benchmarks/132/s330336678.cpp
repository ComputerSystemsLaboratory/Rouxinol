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
  int n, p;
  while (n = in(), p = in(), n || p){
    int id = 0;
    int stone[64] = {};
    int cnt = p;
    int have_user = 0;
    while (1){
      if (cnt == 1 &&
          ((stone[id] && have_user == 1) ||
          (!stone[id] && have_user == 0))){
        break;
      }
      if (cnt == 0){
        if (stone[id]) have_user--;
        cnt = stone[id];
        stone[id] = 0;
      }
      else {
        if (stone[id] == 0) have_user++;
        cnt--;
        stone[id]++;
      }
      id = (id + 1) % n;
    }
    printf("%d\n", id);
  }
  return (0);
}