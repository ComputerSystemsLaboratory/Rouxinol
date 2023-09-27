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

const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};
const int MAX_N = 30;
const int MAX_X = 30;
const int MAX_Y = 30;
int n, m;
int x[MAX_N], y[MAX_N];
map<char, int> hm;
char c;
int d;
bool flag[MAX_X+1][MAX_Y+1];

int main()
{
  hm['W'] = 0;
  hm['S'] = 1;
  hm['E'] = 2;
  hm['N'] = 3;

  while(cin >> n, n){
    int cnt = 0;
    int hx = 10;
    int hy = 10;
    erep(i, 0, MAX_X) erep(j, 0, MAX_Y) flag[i][j] = false;

    rep(i, n){
      cin >> x[i] >> y[i];
      flag[x[i]][y[i]] = true;
      cnt += 1;
    }

    cin >> m;
    rep(i, m){
      cin >> c >> d;
      rep(j, d){
        hx += dx[hm[c]];
        hy += dy[hm[c]];
        if(flag[hx][hy]){
          cnt -= 1;
          flag[hx][hy] = false;
        }
      }
    }

    puts(cnt == 0 ? "Yes" : "No");
  }

  return 0;
}