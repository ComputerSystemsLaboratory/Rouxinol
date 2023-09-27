#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
#define REP(i, n) for(int i = 1; i < (int)(n); ++i)
using namespace std;

constexpr int mod = 1000000007;
struct ModCalc {
    vector<int> fact;
    
    ModCalc(int N) : fact(N + 1) {
        fact[0] = 1;
        rep(i, N) fact[i + 1] = (long long)(i + 1) * fact[i] % mod;
    }
    
    int ModPow(int x, int y) {
        if (y == 0) return 1;
        long long a = ModPow(x, y / 2);
        if (y & 1) return a * a % mod * x % mod;
        else return a * a % mod;
    }
    
    int ModCom(int x, int y) {
        if (x < y) return 0;
        int res = fact[x];
        res = (long long)ModPow(y, mod - 2) * res % mod;
        res = (long long)ModPow(x - y, mod - 2) * res % mod;
        return res;
    }
};

int main() {
    int m, n;
    cin >> m >> n;
    ModCalc MC(1);
    cout << MC.ModPow(m, n) << endl;
    return 0;
}

