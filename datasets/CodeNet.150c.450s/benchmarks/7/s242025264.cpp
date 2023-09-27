#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

int main(void) {
    priority_queue<int> que;
    
    
    int num;
    while(scanf("%d", &num) != EOF) {
        que.push(num);
    }
    cout << que.top() << endl; que.pop();
    cout << que.top() << endl; que.pop();
    cout << que.top() << endl; que.pop();
    
    return(0);
}