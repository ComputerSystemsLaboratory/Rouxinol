#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <memory.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ld> vld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

#define INF ((int)1e9)
#define INFLL ((ll)1e18)
#define MOD (1000000007LL)


int main(int argc, const char * argv[]) {
    int Q;
    string X, Y;
    cin >> Q;
    for (int q = 0; q < Q; ++q) {
        cin >> X >> Y;
        int DP[1001][1001];
        memset(DP, 0, sizeof(DP));
        for (int sx = 1; sx <= X.size(); ++sx) {
            for (int sy = 1; sy <= Y.size(); ++sy) {
                DP[sx][sy] = max(DP[sx-1][sy], DP[sx][sy-1]);
                if (X[sx-1] == Y[sy-1]) {
                    DP[sx][sy] = max(DP[sx][sy], DP[sx-1][sy-1]+1);
                }
            }
        }
        cout << DP[X.size()][Y.size()] << endl;
    }
    return 0;
}

