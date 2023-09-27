#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

template<class T> inline T sqr(T x) {return x*x;}

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;

#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

#define CLR(a) memset((a), 0 ,sizeof(a))

#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

/* 0-indexed only */
class SegmentTree{
private:
  int *stree;
  int n;
public:
  SegmentTree(int N);
  ~SegmentTree();
  void add(int i, int x);
  int getSum(int s, int t);
  int query(int s, int t, int k, int l, int r);
  int ope(int x, int y);
};

SegmentTree::SegmentTree(int N){
  int leading_zero = __builtin_clz(N);

  /* find nearest power of 2 for given N */
  if(__builtin_popcount(N) == 1) n = 1<<(sizeof(int)*8-leading_zero-1);
  else n = 1<<(sizeof(int)*8-leading_zero);

  /* initializing nodes as INF */
  stree = new int[2*n-1];
  for(int i=0;i<2*n-1;i++){
    stree[i] = 0;
  }

}

SegmentTree::~SegmentTree(){
  delete [] stree;
}

int SegmentTree::ope(int x, int y){
  return x+y;
}

void SegmentTree::add(int i, int x){
  int j;

  /* deepest number of nodes */
  j = i + n - 1;
  stree[j] += x;

  while(j>0){
    /* number of upper node */
    j = (j-1)/2;
    stree[j] = ope(stree[2*j+1], stree[2*j+2]);
  }
}

int SegmentTree::getSum(int s, int t){
  return query(s, t+1, 0, 0, n);
}

/* query gives the minimum of [s, t) */
int SegmentTree::query(int s, int t, int k, int l, int r){
  if(r <= s || t <= l) return 0;
  if(s <= l && r <= t) return stree[k];
  else{
    int vl = query(s, t, 2*k+1, l, (l+r)/2);
    int vr = query(s, t, 2*k+2, (l+r)/2, r);
    return ope(vl, vr);
  }
}

int main(void){
  int n, q;
  cin >> n >> q;

  SegmentTree seg(n);

  for(int i=0;i<q;i++){
    int com, x, y;
    cin >> com >> x >> y;
    if(com == 0){
      x--;
      seg.add(x, y);
    }
    if(com == 1){
      x--;
      y--;
      cout << seg.getSum(x, y) << endl;
    }
  }

  return 0;
}