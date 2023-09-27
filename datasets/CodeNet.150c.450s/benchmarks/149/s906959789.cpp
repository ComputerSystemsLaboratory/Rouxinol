#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int> > vii;
#define rrep(i, m, n) for(int (i)=(m); (i)<(n);  (i)++)
#define  rep(i, n)    for(int (i)=0; (i)<(n);  (i)++)
#define  rev(i, n)    for(int (i)=(n)-1; (i)>=0; (i)--)
#define vrep(i, c)    for(__typeof((c).begin())i=(c).begin(); i!=(c).end(); i++)
#define  ALL(v)       (v).begin(), (v).end()
#define mp            make_pair
#define pb            push_back
template<class T1, class T2> inline void minup(T1& m, T2 x){ if(m>x) m=static_cast<T2>(x); }
template<class T1, class T2> inline void maxup(T1& m, T2 x){ if(m<x) m=static_cast<T2>(x); }

#define INF 1000000000
#define MOD 1000000009
#define EPS 1E-9

struct UnionFind
{
private:
  vi data;
  int cnt;

public:
  UnionFind(int size) : data(size, -1), cnt(size) {}
  bool unite(int x, int y){
    x = root(x);
    y = root(y);
    if(x != y){
      if(data[y] < data[x]) swap(x, y);
      data[x] += data[y];
      data[y] = x;
      cnt -= 1;
    }
    return x != y;
  }
  bool same(int x, int y){ return root(x) == root(y); }
  int root(int x){ return data[x] < 0 ? x : data[x] = root(data[x]); }
  int size(int x){ return -data[root(x)]; }
  int group(){ return cnt; }
};

int n, q;
int com, x, y;

int main()
{
  cin >> n >> q;
  UnionFind uf(n);

  while(q--){
    cin >> com >> x >> y;
    if(com == 0) uf.unite(x, y);
    else puts(uf.same(x, y) ? "1" : "0");
  }

  return 0;
}