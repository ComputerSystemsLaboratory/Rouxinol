#include <iostream>
#include <vector>
static bool a(std::vector<int>& w, int s, int k) {
    int c = 1, d = 0;
    for (auto&& e: w) {
        if (e > s) {
            return false;
        }
        if (e + d <= s) {
            d += e;
        } else {
            d = e;
            ++c;
        }
    }
    return c <= k;
}
int main() {
    int n, k, m, s = 0;
    std::cin >> n >> k;
    std::vector<int> w;
    while (std::cin >> m) {
        w.push_back(m);
        s += m;
    }
    s /= k;
    int l = s, r = 2 * s;
    for (int m = l + (r - l) / 2; l < r; m = l + (r - l) / 2) {
        if (a(w, m, k)) {
            r = m;
        } else {
            l = m + 1;
        }
    }
    std::cout << r << std::endl;
}

