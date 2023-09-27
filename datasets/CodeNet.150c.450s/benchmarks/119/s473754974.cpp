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

const int MAX_W = 50;
const int MAX_H = 50;
int w, h;
int c[MAX_W][MAX_H+1];

inline bool check(int hx, int hy){ return 0 <= hx && hx < w && 0 <= hy && hy < h; }

int main()
{
  while(cin >> h >> w, w){
    int res = 0;
    rep(i, w) rep(j, h) cin >> c[i][j];

    rep(i, w) rep(j, h) if(c[i][j]){
      stack<pii> st;
      st.push(mp(i, j));
      c[i][j] = 0;
      res += 1;
      while(!st.empty()){
        pii here = st.top();  st.pop();
        int hx = here.first;
        int hy = here.second;
        erep(dx, -1, 1) erep(dy, -1, 1) if(dx || dy){
          int nx = hx + dx;
          int ny = hy + dy;
          if(!check(nx, ny)) continue;
          if(!c[nx][ny]) continue;
          st.push(mp(nx, ny));
          c[nx][ny] = 0;
        }
      }
    }

    cout << res << endl;
  }

  return 0;
}