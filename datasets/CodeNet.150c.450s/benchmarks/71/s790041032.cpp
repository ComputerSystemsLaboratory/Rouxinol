#include <cstdio>
#include <set>
#include <tuple>

int main() {
    int n;
    std::set<std::tuple<int, int, int, int>> s;
    while (~scanf("%d", &n)) {
        for (int a = 0; a < 10 && a <= n; ++a) {
            for (int b = 0; b < 10 && a + b <= n; ++b) {
                for (int c = 0; c < 10 && a + b + c <= n; ++c) {
                    for (int d = 0; d < 10 && a + b + c + d <= n; ++d) {
                        if (a + b + c + d == n) {
                            s.insert(std::make_tuple(a, b, c, d));
                        }
                    }
                }
            }
        }
        printf("%lu\n", s.size());
        s.clear();
    }
}