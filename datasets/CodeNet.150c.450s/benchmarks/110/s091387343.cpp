#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
typedef pair<ll, pair<ll, ll> > P3;

const ll MOD = ll(1e9 + 7);
const ll LLINF = LLONG_MAX;
const int IINF = INT_MAX;
const int MAX_N = int(1e5) + 5;
const double EPS = 1e-8;
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};
#define SORT(v) sort((v).begin(), (v).end())
#define SORTR(v) sort((v).rbegin(), (v).rend())
#define REP(i, n) for (int i = 0; i < n; i++)
#define REPR(i, n) for (int i = n; i >= 0; i--)
#define FOR(i, m, n) for (ll i = m; i < n; i++)

int h, w, n;
int si[10],sj[10];
int d[1005][1005];
string s[1005];

int bfs(int k) {
    REP(i,h)fill(d[i],d[i]+w,IINF);
    queue<P> que;
    d[si[k]][sj[k]] = 0;
    que.push({si[k],sj[k]});
    while(!que.empty()){
        P p = que.front();
        que.pop();
        int y = p.first, x = p.second;
        REP(m,4){
            int ny = y + dy[m], nx = x + dx[m];
            if (ny < 0 || ny >= h) continue;
            if (nx < 0 || nx >= w) continue;
            if (s[ny][nx] == 'X') continue;
            if(d[ny][nx] == IINF){
                d[ny][nx] = d[y][x] + 1;
                if(si[k+1]==ny && sj[k+1]==nx)return d[ny][nx];
                que.push({ny,nx});
            }
        }
    }
}

int main() {
    cin >> h >> w >> n;
    REP(i, h) {
        cin >> s[i];
        REP(j,w){
            if(s[i][j]=='S'){
                si[0] = i;
                sj[0] = j;
            }
            if(s[i][j]>='1' && s[i][j]<='9'){
                int x = s[i][j] - '0';
                si[x] = i;
                sj[x] = j;
            }
        }
    }
    int ans = 0;
    REP(i,n){
        ans += bfs(i);
    }
    cout << ans << endl;
    return 0;
}

