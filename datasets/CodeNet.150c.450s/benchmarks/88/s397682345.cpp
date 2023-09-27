#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> duo;

#define TT template<typename T>
TT T    sq(T x){ return x*x; }
TT int  ubnd(vector<T>& v,T x){ return upper_bound(v.begin(), v.end(), x) - v.begin(); }
TT int  lbnd(vector<T>& v,T x){ return lower_bound(v.begin(), v.end(), x) - v.begin(); }
TT void sort(T& v){ sort(v.begin(), v.end()); }
TT void revs(T& v){ reverse(v.begin(), v.end()); }
TT void uniq(T& v){ sort(v); v.erase(unique(v.begin(), v.end()), v.end()); }
TT void show(T& v,char d=' ',char e='\n'){for(int i=0;i<v.size();++i)cout<<v[i]<<((i==v.size()-1)?e:d);}
TT void inpt(vector<T>& v,int n){ v.reserve(n);for(int i=0;i<n;++i){T x; cin>>x; v.push_back(x);} }
TT T    In(T& x){ cin >> x; return x; }

static inline void fast_io(){ ios::sync_with_stdio(0); cin.tie(0); }
static inline int in(){ int x; scanf("%d", &x); return x; }
static inline string instr(){ string x; cin >> x; return x; }
static const int dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
static const int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};

struct Rect {
  int h, w, d;
  Rect(int h, int w) : h(h), w(w), d(sq(h) + sq(w)) {}
  bool operator<(const Rect& x) const {
    return d == x.d ? h < x.h : d < x.d;
  }
};

int main()
{
  vector<Rect> v;
  int h, w;
  for (int x = 1; x <= 150; x++){
    for (int y = 1; y < x; y++){
      v.push_back(Rect(y, x));
    }
  }
  sort(v);

  while (h = in(), w = in(), h || w){
    Rect r = Rect(h, w);
    int index = ubnd(v, r);
    printf("%d %d\n", v[index].h, v[index].w);
  }
  return (0);
}