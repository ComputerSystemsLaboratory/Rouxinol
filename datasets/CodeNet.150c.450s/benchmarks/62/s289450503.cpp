#include <iostream>
#include <vector>
#include <algorithm>
  
int main()
{
    static const int kCountMax = 3;
    std::vector<int> v(kCountMax);
    for (int i = 0; i < kCountMax; ++i) {
        std::cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < kCountMax; ++i) {
        std::cout << (i ? " " : "") << v[i];
    }
    std::cout << std::endl;
    return 0;
}