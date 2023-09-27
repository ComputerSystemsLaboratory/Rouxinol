#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    priority_queue<int> pq;
    string command;
    int k;

    while (1) {
        cin >> command;
        if (command == "end") break;
        if (command == "insert") {
            cin >> k;
            pq.push(k);
        } else {
            cout << pq.top() << endl;
            pq.pop();
        }
    }

    return 0;
}
