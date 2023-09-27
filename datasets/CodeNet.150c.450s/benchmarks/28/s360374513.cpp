#define MYDEBUG
//
#include <bits/stdc++.h>
#ifdef MYDEBUG
#define dbp(x) cout<<#x<<": "<<x<<endl
#define dbp2(x,y) cout<<#x<<","<<#y<<": "<<x<<","<<y<<endl
#define dbp3(x,y,z) cout<<#x<<","<<#y<<","<<#z<<": "<<x<<","<<y<<","<<z<<endl
#define dbp4(w,x,y,z) cout<<#w<<","<<#x<<","<<#y<<","<<#z<<": "<<w<<","<<x<<","<<y<<","<<z<<endl
#define ifcin(x) std::ifstream cin(x)
#else
#define dbp(x)
#define dbp2(x,y)
#define dbp3(x,y,z)
#define dbp4(w,x,y,z)
#define ifcin(x)
#endif
#define ll long long
#define all(x) x.begin(), x.end()
#define rep(i, from, to) for(int i=from; i<to; ++i)
#define REP(i, from, to) for(int i=from; i<=to; ++i)
using namespace std;
template<typename T>
ostream& operator<<(ostream& out, const vector<T>& v) {
  out << "[";
  size_t last = v.size() - 1;
  for (size_t i = 0; i < v.size(); ++i) {
    out << v[i];
    if (i != last) {
      out << ",";
    }
  }
  out << "]";
  return out;
}
template<typename T>
ostream& operator<<(ostream& out, const vector<vector<T> >& v) {
  for (size_t i = 0; i < v.size(); ++i) {
    out << v[i] << endl;
  }
  return out;
}
template<typename T1, typename T2>
ostream& operator<<(ostream& out, const pair<T1, T2>& p) {
  out << "{" << p.first << "," << p.second << "}";
  return out;
}

static const int MAX_N = 100000, MAX_W = 10000;
int n, k, w[MAX_N];

//積載量pのトラックk台に積める荷物の最大数
int query(int p) {
  int went = 0, put = 0, i = 0;
  while (went < k && i < n) {
    while (put + w[i] <= p && i < n) {
      put += w[i];
      i++;
    }
    if (put == 0) {
      return i;
    }
    put = 0;
    went++;
  }
  return i;
}

void solve() {
  scanf("%d %d", &n, &k);
  rep(i,0,n)
  {
    scanf("%d", &w[i]);
  }
  //v = query(p)
  //積載量pの元で積める荷物の数vが初めてnと等しくなるときのpを探す
  //(L, R]
  //vの最大値はMAX_N * MAX_W = 10^5 * 10^4 = 10^9
  int L = 0, R = MAX_N * MAX_W + MAX_W, C = L + (R - L) / 2;
  while (R - L > 1) {
    C = L + (R - L) / 2;
    if (query(C) < n) {  //右側に答え
      L = C;
    } else if (query(C) == n) {  //左側に答え
      R = C;
    }
  }
  printf("%d\n", R);  //閉区間側に答え
}
int main() {
  solve();
  return 0;
}

