#include <bits/stdc++.h>

using namespace std;

#define LOG(...) fprintf(stderr, __VA_ARGS__)
//#define LOG(...)
#define FOR(i, a, b) for (int i = (int)(a); i < (int)(b); ++i)
#define RFOR(i, a, b) for (int i = (int)(b - 1); i >= (int)(a); --i)
#define REP(i, n) for (int i = 0; i < (int)(n); ++i)
#define RREP(i, n) for (int i = (int)(n - 1); i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define EXIST(s, e) ((s).find(e) != (s).end())
#define SORT(c) sort(ALL(c))
#define RSORT(c) sort(RALL(c))
#define SZ(a) ((int)(a).size())
#define BIT(x, i) (((x) >> (i)) & 1)
#define SQ(x) ((x) * (x))

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int t[24][60][60];

void read_time(int& h, int& m, int& s) {
    string str;
    cin >> str;
    replace(ALL(str), ':', ' ');
    stringstream ss(str);
    ss >> h >> m >> s;
}

int main() {
    int n;
    while (cin >> n, n) {
        fill_n((int *)t, 24*60*60, 0);
        REP(i, n) {
            int sh, sm, ss, eh, em, es;
            read_time(sh, sm, ss);
            read_time(eh, em, es);
            bool ok = false;
            REP(h, 24) {
                REP(m, 60) {
                    REP(s, 60) {
                        if (h == sh && m == sm && s == ss) {
                            ok = true;
                        }
                        if (h == eh && m == em && s == es) {
                            goto NEXT;
                        }
                        if (ok) t[h][m][s]++;
                    }
                }
            }
NEXT: {}
        }
        int ma = 0;
        REP(h, 24) {
            REP(m, 60) {
                REP(s, 60) {
                    ma = max(ma, t[h][m][s]);
                }
            }
        }
        cout << ma << endl;
    }
}