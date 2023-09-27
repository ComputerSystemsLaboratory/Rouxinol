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
    int n, m;
    while(cin >> n >> m, n|m){
        vector<pair<int, int>> v(n);
        ll ans = 0;
        for (int i = 0; i < n; ++i) {
            scanf("%d%d", &v[i].second, &v[i].first);
            ans += (ll)v[i].second*v[i].first;
        }
        sort(v.begin(), v.end(), greater<>());
        for (int i = 0; i < n; ++i) {
            int y = min(m, v[i].second);
            ans -= y*v[i].first;
            m -= y;
        }
        cout << ans << "\n";
    }
    return 0;
}

