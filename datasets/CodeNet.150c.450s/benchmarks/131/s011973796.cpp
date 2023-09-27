#include <bits/stdc++.h>

#define reps(v, f, l) for (int v = (f), v##_ = (l); v < v##_; ++v)
#define rep(v, n) reps(v, 0, n)
#define lep(v, n) reps(v, 1, n + 1)

using namespace std;

typedef long long int lint;

static inline int in(){ int x; scanf("%d", &x); return x; }
static inline lint inl(){ lint x; scanf("%lld", &x); return x; }
template<typename T> void show(T& a, char del='\n', char last='\n'){ rep(i, a.size() - 1) cout << a[i] << del; cout << a[a.size() - 1] << last; }

int make_next(int x, int l)
{
  char s[8];
  int maxi, mini;
  sprintf(s, "%0*d", l, x);
  sort(s, s + l);
  mini = atoi(s);
  reverse(s, s + l);
  maxi = atoi(s);
  return maxi - mini;
}

int main()
{
  int n, l;
  while (n = in(), l = in()){
    map<int, int> vis;
    int turn = 0;
    do {
      vis.insert(make_pair(n, turn));
      n = make_next(n, l);
      turn++;
    } while (vis.find(n) == vis.end());
    printf("%d %d %d\n", vis[n], n, turn - vis[n]);
  }
  return 0;
}