#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define outl(x) cout<< (x) << '\n'
#define fi first
#define se second
using pii = pair<int,int>;
using ll = long long;

constexpr ll LINF = 0x3f3f3f3f'3f3f3f3fLL;

ll mcos[101][101];

bool floyd(int n)
{
    rep(k, n) {
        rep(i, n) {
            if (mcos[i][k] == LINF) continue;
            rep(j, n) {
                if (mcos[k][j] == LINF) continue;
                mcos[i][j] = min(mcos[i][j], mcos[i][k] + mcos[k][j]);
            }
        }
    }

    rep(i, n) {
        if (mcos[i][i] < 0) return (true); //negative
    }

    return (false);
}

int main()
{
    cin.tie(0), ios::sync_with_stdio(false);

    int N, E;

    cin >> N >> E;

    memset(mcos, 0x3f, sizeof(mcos));
    rep(i, N) mcos[i][i] = 0;

    rep(i, E) {
        int s, t, c;
        cin >> s >> t >> c;
        mcos[s][t] = c;
    }

    if (floyd(N)) {
        outl("NEGATIVE CYCLE");
        return 0;
    }

    rep(i, N) {
        rep(j, N) {
            if (mcos[i][j] == LINF) cout << "INF";
            else cout << mcos[i][j];

            cout << (j+1 < N ? ' ' : '\n');
        }
    }

}


