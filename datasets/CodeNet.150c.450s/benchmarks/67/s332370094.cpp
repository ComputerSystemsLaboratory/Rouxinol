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
#include<list>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define rrep(i, st, n) for (int i = st; i < n; ++i)
using pii = pair<int, int>;
const int inf = 1e9 + 7;
int dy[] = {1, 1, 0, -1, -1, 0};
int dx[] = {1, 0, -1, -1, 0, 1};
#define ceil(a, b) a / b + !!(a % b)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n;
    while (cin >> n && n) {
        int c = 0;
        rrep(i, 1, n) {
            int tmp = i;
            rrep(j, i + 1, n) {
                tmp += j;
                if (tmp == n) c++;
                if (tmp > n) break;
            }
        }
        cout << c << endl;
    }
}

