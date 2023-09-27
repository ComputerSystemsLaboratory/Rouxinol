#include <iostream>
#include <vector>

int main() {
    const int MAX_N = 10000;
    int n = 0, x;
    // std::vector<int> ds(MAX_N, 0);

    for (int i = 0; i < MAX_N; i++) {
        std::cin >> x;
        if (x == 0) {
            break;
        } else {
            std::cout << "Case " << i + 1 << ": " << x << std::endl;
        }
        // if (ds[i] == 0) {
        //     n = i;
        //     break;
        // }
    }
    
    // for (int i = 0; i < n; i++) {
        
    // }
    return 0;
}
