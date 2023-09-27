#include <iostream>
#include <algorithm>
#include <iomanip>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <numeric>
#include <bitset>
#include <cmath>

static const int MOD = 1000000007;
using ll = long long;
using u32 = uint32_t;
using namespace std;

template<class T> constexpr T INF = ::numeric_limits<T>::max()/32*15+208;

template<class T>
class BIT {
    vector<T> bit;
public:
    explicit BIT(int n): bit(vector<T>(n+1, 0)){}

    T sum(int k){
        T ret = 0;
        for (++k; k > 0; k -= (k & -k)) ret += bit[k];
        return ret;
    }

    void add(int k, T x){
        for (++k; k < bit.size(); k  += (k & -k)) bit[k] += x;
    }
};

int main() {
    int n, q;
    cin >> n >> q;
    BIT<int> s(n);
    for (int i = 0; i < q; ++i) {
        int c, x, y;
        scanf("%d %d %d", &c, &x, &y);
        if(c == 0) s.add(x-1, y);
        else printf("%d\n", s.sum(y-1) - s.sum(x-2));
    }
    return 0;
}
