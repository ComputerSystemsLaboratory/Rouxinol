#include <iostream>

void swap(int &x, int &y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    while(true) {
        int x, y;
        std::cin >> x >> y;
        if(x == 0 && y == 0) { break; }
	if(x > y) {
            swap(x, y);
        }
        std::cout << x << " " << y << std::endl;
    }
    return 0;
}