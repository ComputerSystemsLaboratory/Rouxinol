#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    while (n--) {
        float x1, y1, x2, y2, x3, y3, x4, y4;
        std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        std::cout << (((x1 - x2) * (y3 - y4) == (y1 - y2) * (x3 - x4))?
                     "YES": "NO") << std::endl;
    }

    return 0;
}