#include <iostream>
#include <algorithm>

int main()
{
    int n, tmp, min = 2000000000, maxprofit = -1000000000;

    std::cin >> n;

    for ( int i = 0; i < n; ++i ) {
        std::cin >> tmp;
        maxprofit = std::max( maxprofit, tmp - min );
        min = std::min( min, tmp );
    }

    std::cout << maxprofit << std::endl;
}