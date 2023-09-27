#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int> > vii;
#define rrep(i, m, n) for(int (i)=(m); (i)<(n);  (i)++)
#define erep(i, m, n) for(int (i)=(m); (i)<=(n); (i)++)
#define  rep(i, n)    for(int (i)=0; (i)<(n);  (i)++)
#define rrev(i, m, n) for(int (i)=(n)-1; (i)>=(m); (i)--)
#define erev(i, m, n) for(int (i)=(n); (i)>=(m); (i)--)
#define  rev(i, n)    for(int (i)=(n)-1; (i)>=0; (i)--)
#define vrep(i, c)    for(__typeof((c).begin())i=(c).begin(); i!=(c).end(); i++)
#define  ALL(v)       (v).begin(), (v).end()
#define pb            push_back
template<class T, class S> inline pair<T, S> mp(T x, S y){ return make_pair(x, y); }
template<class T, class S> inline bool minup(T& m, S x){ return m>(T)x ? (m=(T)x, true) : false; }
template<class T, class S> inline bool maxup(T& m, S x){ return m<(T)x ? (m=(T)x, true) : false; }

static const int    INF = 1000000000;
static const ll     MOD = 1000000007LL;
static const double EPS = 1E-12;

int m;
string s;

int main()
{
  cin >> m;
  while(m--){
    cin >> s;
    set<string> st;
    rep(i, s.size()-1){
      string l, rl = s.substr(0, i+1);
      string r, rr = s.substr(i+1, s.size()-i-1);
      l = rl;
      r = rr;
      reverse(ALL(rl));
      reverse(ALL(rr));
      st.insert(l + r);
      st.insert(r + l);
      st.insert(l + rr);
      st.insert(rr + l);
      st.insert(rl + r);
      st.insert(r + rl);
      st.insert(rl + rr);
      st.insert(rr + rl);
    }
    cout << st.size() << endl;
  }

  return 0;
}