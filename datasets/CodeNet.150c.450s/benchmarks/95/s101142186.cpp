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
    int n;
    while (cin >> n, n) {
        bool l = false, r = false, updown = true;
        int cnt = 0;
        REP(i, n) {
            string s;
            cin >> s;
            if (s == "lu") {
                l = true;
            } else if (s == "ru") {
                r = true;
            } else if (s == "ld") {
                l = false;
            } else if (s == "rd") {
                r = false;
            }
            if (l == r && l == updown) {
                cnt++;
                updown = !updown;
            }
        }
        cout << cnt << endl;
    }
}