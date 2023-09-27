// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B
// Elementary Number Theory - Power
// status: [solve][review]

#define SUBMIT

#include <utility>
#include <algorithm>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;
using ui64 = unsigned long long;
using i64 = long long;

ui64 power(ui64 x, ui64 n, ui64 mod) {
    ui64 res = 1;
    if (0 < n) {
        res = power(x, n / 2, mod);
        if (n % 2 == 0) res = (res * res) % mod;
        else res = (((res * res) % mod) * x) % mod;
    }
    return res;
}

const ui64 MOD = 1000000007;
ui64 m, n;

int main() {
#ifdef SUBMIT
    auto& stream = cin;
#else
    string program_input_str = R"(5 8
)";
    stringstream stream(program_input_str);
#endif
    stream >> m >> n;
    auto ans = power(m, n, MOD);
    cout << ans << endl;
    return 0;
}
