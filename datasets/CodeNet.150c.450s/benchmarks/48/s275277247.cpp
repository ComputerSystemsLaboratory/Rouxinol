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
TT T In(){ T x; cin >> x; return x; }

static inline void fast_io(){ ios::sync_with_stdio(0); cin.tie(0); }
static inline int in(){ int x; scanf("%d", &x); return x; }
static inline string instr(){ string x; cin >> x; return x; }
static const int dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
static const int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};

int main()
{
  while (int e = in()){
    int m = 1e8;
    for (int z = 0; z <= 100; ++z){
      for (int y = 0; y <= 1000; ++y){
        int x = e - (sq(z) * z + sq(y));
        if (x < 0) continue;
        m = min(m, z + y + x);
      }
    }
    printf("%d\n", m);
  }
  return (0);
}