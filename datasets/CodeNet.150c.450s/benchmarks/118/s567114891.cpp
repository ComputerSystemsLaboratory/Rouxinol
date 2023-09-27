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
    cin >> n;
    REP(i, n) {
        int y, m, d;
        cin>>y>>m>>d;

        int cnt;
        if (m % 2 == 0) {
            if (y % 3 == 0) {
                cnt = 21 - d;
            } else {
                cnt = 20 - d;
            }
        } else {
            cnt = 21 - d;
        }
        m++;
        while (1) {
            if (m == 11) {
                m = 1;
                y++;
            }
            if (y == 1000 && m == 1) break;
            if (y % 3 == 0) {
                cnt += 20;
            } else {
                if (m % 2 == 0) {
                    cnt += 19;
                } else {
                    cnt += 20;
                }
            }
            m++;
        }
        cout << cnt << endl;
    }
}