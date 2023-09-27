// @author: arch_

#include <bits/stdc++.h>
using namespace std;

vector<int> hmw;

int main(void) {
    int n, x, count = 0;
    while (cin >> n >> x,
           n != 0 || x != 0) {
        count = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = i; j <= n; j++) {
                for (int k = j; k <= n; k++) {
                    if (i == j || j == k || k == i) {}
                    else {
                        count += static_cast<int>(i + j + k == x);
                    }
                }
            }
        }
        hmw.emplace_back(count);
    }
    for (auto&& i : hmw) cout << i << "\n";
    return 0;
}