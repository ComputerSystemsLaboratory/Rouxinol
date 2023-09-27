#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n+1, 0);
    vec[0] = 1;
    vec[1] = 1;
    for (int i = 2; i <= n; i++) {
        vec[i] = vec[i-1] + vec[i-2];
    }
    std::cout << vec[n] << std::endl;
}

