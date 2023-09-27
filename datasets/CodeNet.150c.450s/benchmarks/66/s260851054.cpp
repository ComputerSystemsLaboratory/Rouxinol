#include <iostream>
#include <algorithm>
#include <iomanip>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <numeric>
#include <bitset>

static const int MOD = 1000000007;
using ll = long long;
using u32 = uint32_t;
using namespace std;

template<class T> constexpr T INF = ::numeric_limits<T>::max()/32*15+208;

int main() {
    int n;
    cin >> n;
    map<string, int> ma;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        ma[s]++;
    }
    int m;
    cin >> m;
    int cnt = 1;
    for (int i = 0; i < m; ++i) {
        string t;
        cin >> t;
        if(ma.count(t)){
            printf(cnt%2 ? "Opened by " : "Closed by ");
            cnt++;
        }else {
            printf("Unknown ");
        }
        cout << t << "\n";
    }
    return 0;
}

