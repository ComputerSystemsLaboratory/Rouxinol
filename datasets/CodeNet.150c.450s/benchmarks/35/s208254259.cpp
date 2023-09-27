#include <iostream>
#include <algorithm>
#include <vector>


int main() {
    int n;
    std::cin >> n;
    while (n != 0) {
        std::vector<int> vec(n+1, 0);
        int x;
        for (int i = 1; i <= n; ++i) {
            std::cin >> x;
            vec[i] = x;
        }
        std::vector<int> sum;
        sum.assign(n+1, 0);
        sum[1] = vec[1];
        for (int i = 1; i < n; i++) {
            sum[i+1] = sum[i] + vec[i+1];
        }
        int ans = -1000000000;
        for (int l = 1; l <= n; ++l) {
            for (int r = l; r <= n; ++r) {
                ans = std::max(ans, sum[r] - sum[l-1]);
            }
        }
        std::cout << ans << std::endl;
        std::cin >> n;
    }
}
