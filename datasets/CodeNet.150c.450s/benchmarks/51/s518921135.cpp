#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <map>
#include <queue>

static const int MOD = 1000000007;
using ll = long long;
using u32 = unsigned;
using namespace std;

template<class T>
constexpr T INF = ::numeric_limits<T>::max() / 32 * 15 + 208;

int main() {
    map<int, int> m;
    for (int i = 0; i < 28; ++i) {
        int k;
        cin >> k;
        m[k]++;
    }
    for (int i = 1; i <= 30; ++i) {
        if(!m[i]) cout << i << "\n";
    }
    return 0;
}

