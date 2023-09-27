#include <algorithm>
#include <complex>
#include <functional>
#include <iostream>
#include <map>
#include <memory>
#include <queue>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <thread>
#include <tuple>
#include <type_traits>
#include <vector>


#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace std;
using ll = long long;

#define M (1'000'000'007)

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> d(n + 1, 0);

    for (int x = 1; x < 100; x++) {
        for (int y = 1; y < 100; y++) {
            for (int z = 1; z < 100; z++) {
                ll r = x * x + y * y + z * z + x * y + y * z + z * x;
                if (r <= n) {
                    d[r]++;
                }
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << d[i] << endl;
    }

    return 0;
}
