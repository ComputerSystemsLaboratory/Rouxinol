#include <bits/stdc++.h>

using namespace std;

#define LOG(...) fprintf(stderr,__VA_ARGS__)
//#define LOG(...)
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define RFOR(i,a,b) for(int i=(int)(b-1);i>=(int)(a);--i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define RREP(i,n) for(int i=(int)(n-1);i>=0;--i)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort(ALL(c))
#define RSORT(c) sort(RALL(c))
#define SZ(a) ((int)(a).size())
#define BIT(x, i) (((x) >> (i)) & 1)
#define SQ(x) ((x)*(x))

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
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

int main() {
    vvc chartable;
    chartable.push_back({'.',',','!','?',' '});
    chartable.push_back({'a','b','c'});
    chartable.push_back({'d','e','f'});
    chartable.push_back({'g','h','i'});
    chartable.push_back({'j','k','l'});
    chartable.push_back({'m','n','o'});
    chartable.push_back({'p','q','r','s'});
    chartable.push_back({'t','u','v'});
    chartable.push_back({'w','x','y','z'});

    int n;
    cin >> n;
    REP(i, n) {
        string s;
        cin >> s;
        int a = -1, b = 0;
        REP(j, SZ(s)) {
            if (s[j] == '0') {
                if (a != -1) {
                    cout << chartable[a][b];
                }
                a = -1;
            } else {
                if (a != s[j] - '0' - 1) {
                    a = s[j] - '0' - 1;
                    b = -1;
                }
                b = (b + 1) % SZ(chartable[a]);
            }
        }
        cout << endl;
    }
}