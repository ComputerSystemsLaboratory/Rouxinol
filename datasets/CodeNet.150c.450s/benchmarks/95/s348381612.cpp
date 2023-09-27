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
    while(cin >> n, n){
        int ans = 0, l = 0, r = 0, p = 0;
        for (int i = 0; i < n; ++i) {
            string s;
            cin >> s;
            if(s == "lu") l = 1;
            else if(s == "ru") r = 1;
            else if(s == "ld") l = 0;
            else r = 0;
            if(l == 1 && r == 1 && p == 0) ans++, p = 1;
            if(l == 0 && r == 0 && p == 1) ans++, p = 0;
        }
        cout << ans << "\n";
    }
    return 0;
}

