#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;
#define INF (1 << 30)


priority_queue<int> PQ;

int main() { 
    string com;
    int key;
    while( 1 ) {
        cin >> com;
        if (com == "insert") {
            cin >> key;
            PQ.push(key);
        }
        else if (com == "extract") {
            cout << PQ.top() << '\n';
            PQ.pop();
        }
        else if (com == "end")
            break;
    }
}

