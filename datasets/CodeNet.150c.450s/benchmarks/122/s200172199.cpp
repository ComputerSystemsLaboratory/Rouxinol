#include <queue>
#include <string>
#include <iostream>
using namespace std;
int main() {
    string cmd;
    priority_queue<int> Q;
    while (cin >> cmd && cmd != "end") {
        if (cmd == "insert") {
            int a;
            cin>>a;
            Q.push(a);
        } else if (cmd == "extract") {
            int a=Q.top();Q.pop();
            cout<<a<<endl;
        }
    }
}