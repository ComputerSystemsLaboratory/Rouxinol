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

static const int MAX_LEN = 20000;
static const int MAX_MIZU = MAX_LEN / 2;
static const char DOWN = '\\', FLAT = '_', UP = '/';
char d[MAX_LEN]; //diagram: \\//\\__//
stack<int> st;
stack<pair<int, int> > mizu, mizu_rev;
int n, total;

void solve() {
  scanf("%s", d);
  n = strlen(d);
  rep(i,0,n)
  {
    if (d[i] == DOWN) {
      st.push(i);
    } else if (d[i] == UP) {
      if (st.empty()) {
        continue;
      }
      int left = st.top();
      st.pop();
      int area = i - left;
      while (!mizu.empty()) {
        int l = mizu.top().first;
        if (left <= l) { //水没する水たまりだけマージする
          area += mizu.top().second;
          mizu.pop();
        } else {
          break;
        }
      }
      mizu.push(make_pair(left, area));
    }
  }
  while (!mizu.empty()) {
    mizu_rev.push(mizu.top());
    total += mizu.top().second;
    mizu.pop();
  }
  printf("%d\n", total);
  printf("%lld", mizu_rev.size());
  while (!mizu_rev.empty()) {
    printf(" %d", mizu_rev.top().second);
    mizu_rev.pop();
  }
  printf("\n");
}
int main() {
  solve();
  return 0;
}

