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

int sqrtn = 317;
vector<int> data;
vector<int> gather;
int K;
struct sqrtdecomp {
public:
    sqrtdecomp(int n) {
        K = (n + sqrtn - 1) / sqrtn; //n / sqrtnの切り上げ
        data.resize(n, 0);
        gather.resize(K, 0);
    }
    void update(int x, int y) {
        data[x] += y;
        gather[x / sqrtn] += y;
    }
    int find(int x, int y) {
        int val = 0;
        rep (k, K) {
            int l = k * sqrtn;
            int r = (k + 1) * sqrtn;
            if (r <= x || y <= l) continue;
            if (x <= l && r <= y) val += gather[k];
            else {
                rrep(i, max(x, l), min(y, r)) {
                    val += data[i];
                }
            }
        }
        return val;
    }
};
int main() {
    int n, q; cin >> n >> q;
    sqrtdecomp sd(n);
    rep(i, q) {
        int com, x, y;
        cin >> com >> x >> y;
        x--;
        if (com == 1) y--;
        if (com == 0) {
            sd.update(x, y);
        } else {
            cout << sd.find(x, y + 1) << endl;
        }
        /*
        cout << "gat ";
        rep(i, K) cout << gather[i] << " "; cout << endl;
        cout << "data ";
        rep(i, n) cout << data[i] << " "; cout << endl;
         */
    }
}

