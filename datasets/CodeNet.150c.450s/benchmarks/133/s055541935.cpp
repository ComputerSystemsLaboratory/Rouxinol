#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define REPR(i, n) for (int i = n - 1; i >= 0; i--)
#define INF 1LL << 60;
#define LLINF 1e12
#define PI 3.14159265359
#define ALL(a) (a).begin(), (a).end()
int dy[] = {1, 0, -1, 0};
int dx[] = {0, 1, 0, -1};
int dy8[] = {1, 0, -1, 0, 1, -1, -1, 1};
int dx8[] = {0, 1, 0, -1, 1, 1, -1, -1};
int ny, nx;
typedef long long ll;
using namespace std;

int main()
{
    int D; cin >> D;
    int c[26]; REP(i,26) cin >> c[i];
    int s[D][26]; REP(i,D) REP(j,26) cin >> s[i][j];
    int t[D]; REP(i,D) cin >> t[i];

    ll satis = 0;
    int lastday[26]; REP(i,26) lastday[i] = 0;

    int j;
    REP(i,D){
        j = t[i] - 1;
        lastday[j] = i + 1;
        REP(k,26){
            satis -= (i + 1 - lastday[k]) * c[k];
        }
        satis += s[i][j];
        cout << satis << endl;
    }

    return 0;
}