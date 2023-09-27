// ALDS1_9_C Priority Queue
#include <iostream>
#include <string>
#include <queue>
bool debug = false;

int main() {
    std::priority_queue<int> pq;
    std::string command_1;
    int command_2;
    while (true) {
        std::cin >> command_1;
        if (command_1 == "end") break;
        if (command_1 == "extract") {
            std::cout << pq.top() << "\n";
            pq.pop();
        } else {
            std::cin >> command_2;
            pq.push(command_2);
        }
    }
}
