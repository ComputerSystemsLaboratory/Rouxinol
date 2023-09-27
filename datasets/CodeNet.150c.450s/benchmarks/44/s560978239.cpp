#include <iostream>
#include <array>
#include <algorithm>

int main(void) {
    std::array<u_int, 4> a;
    std::array<u_int, 4> b;

    while (std::cin >> a[0] >> a[1] >> a[2] >> a[3]
                    >> b[0] >> b[1] >> b[2] >> b[3])
    {
        int hit = 0;
        for (int i = 0; i < 4; ++i) {
            if (a[i] == b[i]) ++hit;
        }

        int blow = -hit;
        std::sort(a.begin(), a.end());
        for (auto v : b) {
            if ( std::binary_search(a.begin(), a.end(), v) ) ++blow;
        }

        std::cout << hit << " " << blow << std::endl;
    }

    return 0;
}