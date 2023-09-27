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
    int n, a, b;
    while(cin >> n >> a >> b, n|a|b){
        vector<int> v(n);
        for (auto &&i : v) scanf("%d", &i);
        int ans = 0, M = -1;
        for (int i = a; i <= b; ++i) {
            if(M <= v[i-1]-v[i]) {
                ans = i;
                M = v[i-1]-v[i];
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

