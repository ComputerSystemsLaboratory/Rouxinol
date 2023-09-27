#include <bits/stdc++.h>

using namespace std;

#define LOG(...) fprintf(stderr,__VA_ARGS__)
//#define LOG(...)
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort(ALL(c))
#define RSORT(c) sort(RALL(c))

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

int main() {
    int n, m;
    while (cin >> n >> m, n|m) {
        vi h(n+1);
        vi w(m+1);
        h[0] = 0;
        w[0] = 0;
        REP(i, n) cin >> h[i+1];
        REP(i, m) cin >> w[i+1];

        map<int, int> square;

        int y = 0;
        for (int dy : h) {
            y += dy;
            int x = 0;
            for (int dx : w) {
                x += dx;
                square[x-y]++;
            }
        }

        int cnt = 0;
        for (map<int, int>::iterator it = square.begin(); it != square.end(); it++) {
            int n = it->second;
            if (n > 1) {
                cnt += 1.0/2 * n * (n-1);
            }
        }

        cout << cnt << endl;
    }
}