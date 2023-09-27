#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

int main(void) {
    priority_queue<int> que;
    for(int r = 0; r < 10; r++) {
        int input; cin >> input;
        que.push(input);
    }
    for(int r = 0; r < 3; r++) {
        cout << que.top() << endl; que.pop();
    }
    return(0);
}