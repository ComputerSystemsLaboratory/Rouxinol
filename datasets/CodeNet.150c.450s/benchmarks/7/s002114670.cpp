#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> hills;
    
    int n;
    while (std::cin >> n) {
        hills.push_back(n);
    }
    
    std::sort(hills.begin(), hills.end(), std::greater<int>());
    
    for (int i = 0; i < 3; ++i) {
        std::cout << hills[i] << std::endl;
    }
    
    return 0;
}