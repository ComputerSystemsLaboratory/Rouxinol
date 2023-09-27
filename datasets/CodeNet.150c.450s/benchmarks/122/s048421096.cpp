#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> PQ;
    while (1) {
        string command;
        cin >> command;
        if (command == "end") {
            return 0;
        }
        if (command == "insert") {
            int k;
            cin >> k;
            PQ.push(k);
            continue;
        }
        if (command == "extract") {
            cout << PQ.top() << endl;
            PQ.pop();
        }
    }
    return 0;
}