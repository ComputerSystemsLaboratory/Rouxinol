#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<map>
#include<stack>
#include<cmath>
#include<iomanip>
#include<set>
#include<numeric>
#include<sstream>
#include<random>
#include<cassert>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define rrep(i, st, n) for (int i = st; i < n; ++i)
using pii = pair<int, int>;
const int inf = 1e9 + 7;
int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};
int dx[] = {1, -1, 0, 0, -1, 1, 1, -1};
#define ceil(a, b) a / b + !!(a % b)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

const int INF = (1LL << 31) - 1;
const int sqrtN = 512;
struct SqrtDecomposition {
    int N, K;
    vector<int> data;
    vector<int> bucketMin;
    SqrtDecomposition(int n) : N(n) {
        K = (N + sqrtN - 1) / sqrtN;
        data.assign(K * sqrtN, 0);
        bucketMin.assign(K, 0);
    }
    void update(int x, int y) {
        int k = x / sqrtN;
        data[x] += y;
        bucketMin[k] += y;
    }
    int find(int x, int y) {
        int val = 0;
        rep(k, K) {
            //sqrtN区間ずつみる
            int l = k * sqrtN, r = (k + 1) * sqrtN;
            //範囲外
            if (r <= x || y <= l) continue;
            //完全被覆
            if (x <= l && r <= y) val += bucketMin[k];
            //部分被覆
            else rrep(i, max(x, l), min(y, r)) {
                val += data[i];
            }
        }
        return val;
    }
    void check() {
        rep(i, N) cout << data[i] << " "; cout << endl;
    }
};
int main() {
    int n, q;
    cin >> n >> q;
    SqrtDecomposition sd(n);
    rep(i, q) {
        int p, a, b;
        cin >> p >> a >> b;
        a--;
        if (p == 1) b--;
        if (p == 0) sd.update(a, b);
        else cout << sd.find(a, b + 1) << endl;
        //sd.check();
    }
    return 0;
}

