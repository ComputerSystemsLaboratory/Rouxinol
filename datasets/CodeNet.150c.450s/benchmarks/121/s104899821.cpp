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

struct UF {
  vector<int> data;
  int group;
  UF(int size) : data(size, -1), group(size) {}
  bool merge(int x, int y){
    x = root(x), y = root(y);
    if (x != y){
      group--;
      if (data[x] > data[y]) swap(x, y);
      data[x] += data[y];
      data[y] = x;
    }
    return (x != y);
  }
  int root(int x){
    return data[x] < 0 ? x : data[x] = root(data[x]);
  }
  int count(){
    return group;
  }
};

int main()
{
  int w, h;
  while (h = in(), w = in(), w){
    vector<string> field;
    for (int i = 0; i < h; i++){
      string s;
      cin >> s;
      field.push_back(s);
    }
    UF uf(h * w);
    for (int i = 0; i < h; i++){
      for (int j = 0; j < w; j++){
        for (int d = 0; d < 4; d++){
          static const int dx[] = {0, 0, 1, -1};
          static const int dy[] = {1, -1, 0, 0};
          int nx = j + dx[d];
          int ny = i + dy[d];
          if (nx < 0 || nx >= w || ny < 0 || ny >= h) continue;
          if (field[i][j] == field[ny][nx]){
            uf.merge(i * w + j, ny * w + nx);
          }
        }
      }
    }
    printf("%d\n", uf.count());
  }

  return 0;
}