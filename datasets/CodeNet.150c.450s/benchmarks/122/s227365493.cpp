#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> A;

    string command;
    int target;
    while(true) {
        cin >> command;
        if (command == "insert") {
            cin >> target;
            A.push(target);
        } else if (command == "extract") {
            cout << A.top() << endl;
            A.pop();
        } else {
            break;
        }
    }

    return 0;
}

