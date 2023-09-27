#include <iostream>
int main() {
    int w, h, x, y, r;
    std::cin >> w >> h >> x >> y >> r;
    std::string s = { "No" };
    if (x >= r && x <= w - r && y >= r && y <= h - r) {
        s = "Yes";
    }
    std::cout << s << std::endl;
}

