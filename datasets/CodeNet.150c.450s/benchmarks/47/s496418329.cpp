#include <iostream>

int main(void)
{
    int x, y, W, H, r;
    std::cin >> W >> H >> x >> y >> r;
    if((r <= x && x <= W-r) && (r <= y && y <= H-r)) {
	std::cout << "Yes" << std::endl;
    } else {
	std::cout << "No" << std::endl;
    }
    return 0;
}