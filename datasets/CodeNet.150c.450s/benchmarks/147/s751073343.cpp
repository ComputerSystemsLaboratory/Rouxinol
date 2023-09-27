#include <iostream>
#include <array>
#include <cmath>

using namespace std;
const int maxn = 10005;

void solve(const int& n) {
    std::array<int, maxn> res{};
    int nsq = floor(sqrt(n));
    for (int i = nsq; i >= 1; i --) {
        for (int j = nsq; j >= 1; j --) {
            for (int k = nsq; k >= 1; k --) {
                int s = pow(i, 2) + pow(j, 2) + pow(k, 2) + i*j + i*k + j*k;
                if (s < maxn)
                    res[s] += 1;
            }
        }
    }
    for (int i = 1; i <= n; i ++) {
        cout << res[i] << endl;
    }
}

int main() {
    int n;
    cin >> n;
    solve(n);

    return 0;
}