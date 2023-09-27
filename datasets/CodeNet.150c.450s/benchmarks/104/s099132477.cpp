#include <cstdio>
#include <utility>
#include <vector>

int main() {
    std::vector<int> v;
    
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; ++i) {
        v.push_back(i);
    }
    
    int n;
    scanf("%d", &n);
    
    int a, b;
    while (~scanf("%d,%d", &a, &b)) {
        std::swap(v[a - 1], v[b - 1]);
    };
    
    for (const auto& i : v) {
        printf("%d\n", i + 1);
    }
}