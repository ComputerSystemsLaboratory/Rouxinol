#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0) {
            std::cout << " " << i;
        } else {
            int x = i;
            while (true) {
                if (x % 10 == 3) {
                    std::cout << " " << i;
                    break;
                }
                x /= 10;
                if (x == 0) {
                    break;
                }
            }
        }
    }

    std::cout << std::endl;

    return 0;
}
