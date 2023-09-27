#include <bits/stdc++.h>
using namespace std;
#define repd(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) repd(i,0,n)
#define all(x) (x).begin(),(x).end()
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
const long long INF = 1LL << 60;
typedef pair<int, int> P;
int main()
{
    while (1) {
        int N;
        cin >> N;
        if (N == 0) break;
        vector<int> imos(86402, 0);
        rep(i, N) {
            int fh, fm, fs, th, tm, ts;
            scanf("%d:%d:%d %d:%d:%d", &fh, &fm, &fs, &th, &tm, &ts);
            int secf = fh * 3600 + fm * 60 + fs;
            int sect = th * 3600 + tm * 60 + ts;
            imos[secf]++; imos[sect]--;
        }

        repd(i, 1, imos.size()) {
            imos[i] += imos[i - 1];
        }

        int res = 0;
        rep(i, imos.size()) {
            chmax(res, imos[i]);
        }

        cout << res << endl;
    }
    return 0;
}
