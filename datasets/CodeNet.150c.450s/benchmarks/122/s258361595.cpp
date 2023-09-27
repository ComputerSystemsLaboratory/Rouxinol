#include <iostream>
#include <queue>


int main() {
    std::priority_queue<int> PQ;
    while (true) {
        std::string str;
        std::cin >> str;
        if (str == "extract") {
            std::cout << PQ.top() << std::endl;
            PQ.pop();
            continue;
        }
        if (str == "insert") {
            int k;
            std::cin >> k;
            PQ.push(k);
            continue;
        }
        break;
    }
    return 0;
}
