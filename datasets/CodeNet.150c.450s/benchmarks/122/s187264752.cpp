#include <iostream>
#include <queue>
using namespace std;
int main() {
    string num, name;
    int pick;
    priority_queue<int> pickles;
    while(cin >> num && num != "end" ) {
        if (num == "insert") {
            cin >> pick;
            pickles.push(pick);
        } else {
            cout  << pickles.top() << endl;
            pickles.pop();
        }
    }
    return 0;
}
