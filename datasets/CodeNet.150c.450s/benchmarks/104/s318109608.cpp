#include <iostream>
#include <vector>
#include <algorithm>

int w, n;
std::vector<int> ans;

int main() {
    int i = 0;

    std::cin >> w;
    std::cin >> n;

    ans.resize(w);
    for(i = 0; i < w; ++i) {
        ans[i] = i;
    }
    for(i = 0; i < n; ++i) {
        int a, b;
        char c;
        
        std::cin >> a >> c >> b;
        --a, --b;
        std::swap(ans[a], ans[b]);
    }
    for(int x: ans) {
        std::cout << x + 1 << std::endl;
    }
}
