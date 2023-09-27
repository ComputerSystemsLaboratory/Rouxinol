#include <iostream>
#include <queue>

using namespace std;

int main() {
    priority_queue<int> pq;

    for (int i = 0; i < 10; ++i) {
        int height;
        cin >> height;
        pq.emplace(height);
    }


    for (int i = 0; i <= 2; ++i) {
        std::cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}