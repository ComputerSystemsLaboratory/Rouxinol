#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    auto f = [](int n) { return n * (n + 1) / 2; };
    vector<int> cnt(500555, 0);
    for (int i = 1; i <= 1000; i++) {
        for (int len = 2; i + len <= 1000; len++) {
            cnt[f(i + len - 1) - f(i - 1)]++;
        }
    }
    while (cin >> n, n) {
        cout << cnt[n] << endl;
    }
    return 0;
}
