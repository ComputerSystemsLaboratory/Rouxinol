#include <iostream>
#include <algorithm>

int main()
{
    int n, min = 1000000, max = -1000000;
    long sum = 0;

    std::cin >> n;

    for( int i = 0; i < n; ++i ){
        int a;
        std::cin >> a;
        min = std::min(a, min);
        max = std::max(a, max);
        sum += a;
    }

    std::cout << min << " "
              << max << " "
              << sum << std::endl;
}