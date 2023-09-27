/* vim:set foldmethod=marker: */
#include <bits/stdc++.h>
using namespace std;

//{{{
#define all(x) (x).begin(),(x).end()
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)
#define RREP(i,a,b) for(int i=(int)(a); i>=b; i--)
#define rep(i,n) REP(i,0,n)
#define rrep(i,n) RREP(i,n,0)
#define pb(x) push_back(x)
#define mp(x,y) make_pair((x),(y))

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vp;

#define dump(x) (cerr << #x << "=" << x << endl)
template<class T> ostream& osContainer(ostream& os,T c) { os<<'[';for(decltype(c.begin()) it=c.begin();it!=c.end();it++)os<<*it<<',';os<<']';return os; }
template<class T> ostream& operator<<(ostream& os,const vector<T>& v) { return osContainer(os,v); }
template<class T> ostream& operator<<(ostream& os,const set<T>& s) { return osContainer(os,s); }
template<class T> ostream& operator<<(ostream& os,const multiset<T>& s) { return osContainer(os,s); }
template<class T,class S> ostream& operator<<(ostream& os,const map<T,S>& m) { return osContainer(os,m); }
template<class T,class S> ostream& operator<<(ostream& os,const multimap<T,S>& m) { return osContainer(os,m); }
template<class T1,class T2>
ostream& operator<<(ostream& os, const pair<T1,T2>& p){ os << '(' << p.first << ',' << p.second << ')'; return os; }

const int dx[] = {0,1,0,-1};
const int dy[] = {1,0,-1,0};
//}}}
//

char check[20][20];
char field[21][21];

void solve()
{
    int w, h;
    while (cin >> w >> h, w || h) {
        memset(check, 0, sizeof(check));

        int sx, sy;

        rep(i, h) {
            rep(j, w){
                char c;
                cin >> c;
                field[i][j] = c;
                if (c == '@') {
                    sy = i, sx = j;
                    check[sy][sx] = 1;
                }
            }
            cin.ignore();
        }

        queue<pair<int, int>> q;
        q.push(mp(sy, sx));

        int s = 1;

        while(!q.empty()) {
            auto p = q.front();q.pop();
            int y = p.first, x = p.second;

            rep(i, 4) {
                int ddy = y + dy[i], ddx = x + dx[i];

                if (0 <= ddy && ddy < h && 0 <= ddx & ddx < w && field[ddy][ddx] == '.' && !check[ddy][ddx]) {
                    s++;
                    check[ddy][ddx] = 1;
                    q.push(mp(ddy, ddx));
                }
            }
        }

        cout << s << endl;
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout.setf(ios::fixed);
    cout.precision(12);
    solve();
}