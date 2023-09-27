#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    
    int tmp;
    stack<int> s;
    queue<int> q;
    
    while(cin >> tmp) {
        if(tmp == 0) {
            q.push(s.top());
            s.pop();
        } else {
            s.push(tmp);
        }
    }
    
    while(!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }
    
    return 0;
}
