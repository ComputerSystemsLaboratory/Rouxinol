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
#define mp            make_pair
#define pb            push_back
template<class T, class S> inline bool minup(T& m, S x){ return m>(T)x ? (m=(T)x, true) : false; }
template<class T, class S> inline bool maxup(T& m, S x){ return m<(T)x ? (m=(T)x, true) : false; }

const int    INF = 1000000000;
const ll     MOD = 1000000007LL;
const double EPS = 1E-12;

const int MAX_W = 50;
const int MAX_H = 20;
const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};
int H, W;
bool ok[MAX_H][MAX_W];
char maze[MAX_H][MAX_W+1];
int sx, sy;

inline bool check(int hx, int hy){ return 0 <= hx && hx < H && 0 <= hy && hy < W; }

int main()
{
  while((cin >> W >> H) && W){
    rep(i, H) cin >> maze[i];

    rep(i, H) rep(j, W) ok[i][j] = false;
    rep(i, H) rep(j, W) if(maze[i][j] == '@') sx = i,  sy = j;

    stack<pii> st;
    st.push(mp(sx, sy));
    maze[sx][sy] = '.';
    ok[sx][sy] = true;
    while(!st.empty()){
      pii here = st.top();  st.pop();
      int hx = here.first;
      int hy = here.second;
      rep(k, 4){
        int nx = hx + dx[k];
        int ny = hy + dy[k];
        if(!check(nx, ny) || maze[nx][ny] == '#') continue;
        if(ok[nx][ny]) continue;
        ok[nx][ny] = true;
        st.push(mp(nx, ny));
      }
    }

    int res = 0;
    rep(i, H) rep(j, W) if(ok[i][j]) res += 1;
    cout << res << endl;
  }

  return 0;
}