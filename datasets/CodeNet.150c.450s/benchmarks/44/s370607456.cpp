#include <iostream>
#include <array>

using std::cin;

int main()
{
    std::array<int, 4> a, b;
    while (cin >> a.at(0)) {
        for (auto i = 1; i < 4; i++) {
            cin >> a.at(i);
        }
        for (auto i = 0; i < 4; i++) {
            cin >> b.at(i);
        }

        int hit = 0, blow = 0;
        for (auto i = 0; i < 4; i++) {
            for (auto j = 0; j < 4; j++) {
                if (a.at(i) == b.at(j)) {
                    if (i == j) {
                        hit++;
                    } else {
                        blow++;
                    }
                }
            }
        }

        std::cout << hit << " " << blow << std::endl;
    }

    return 0;
}