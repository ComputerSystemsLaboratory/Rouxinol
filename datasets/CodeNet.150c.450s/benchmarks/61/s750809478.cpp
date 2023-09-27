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
    int n, a, b, c, x;
    while(cin >> n >> a >> b >> c >> x, n|a|b|c|x){
        vector<int> v(n);
        for (auto &&i : v) scanf("%d", &i);
        int cur = 0, ans = 0;
        if(x == v[cur]) cur++;
        while(ans <= 10000 && cur < n){
            x = (a*x+b)%c;
            if(x == v[cur]) cur++;
            ans++;
        }
        cout << (ans <= 10000 ? ans : -1) << "\n";
    }
    return 0;
}

