#include <iostream>
#include <queue>
#include <algorithm>

int main(void) {
    std::priority_queue<int> heights;
 
    for (int h, i = 0; i < 10; ++i) {
        std::cin >> h;
        heights.push(h);
    }
 
    for (int i = 0; i < 3; ++i) {
        std::cout << heights.top() << std::endl;
        heights.pop();
    }

    return 0;
}