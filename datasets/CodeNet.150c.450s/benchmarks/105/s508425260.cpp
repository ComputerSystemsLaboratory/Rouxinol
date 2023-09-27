#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <iomanip>
#include <map>
#include <set>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <iterator>
#include <string>
#include <limits>

using namespace std;

using i64 = int64_t;
using P = pair<i64, i64>;
//i64 mod = 1000000007;
i64 mod = 998244353;
int int_max = 2147483647;
i64 INF = 1e16;
int max_n = 1e5;

int main(int argc, char **argv) {
    i64 t;
    cin >> t;

    for (int ti=0; ti<t; ++ti) {
        i64 n;
        cin >> n;
        std::vector<i64> a(n);
        std::vector<i64> xo = {0};
        for (int i=0; i<n; ++i) {
            cin >> a[i];
        }
        string s;
        cin >> s;

        bool res{true};

        for (int i=n-1; i >= 0; --i) {
            i64 num = a[i];
            for (i64 v : xo) num = min(num, num ^ v);
            if (num) {
                if (s[i] == '0') {
                    xo.push_back(num);
                } else {
                    res = false;
                    break;
                }
            }
        }
        cout << (res ? '0' : '1') << endl;
    }

    return 0;
}