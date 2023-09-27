#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    string str;
    while (cin >> str) {
        if (str[0] == '+') {
            int t1 = s.top(); s.pop();
            int t2 = s.top(); s.pop();
            s.push(t1 + t2);
        }
        else if (str[0] == '-') {
            int t2 = s.top(); s.pop();
            int t1 = s.top(); s.pop();
            s.push(t1 - t2);
        }
        else if (str[0] == '*') {
            int t1 = s.top(); s.pop();
            int t2 = s.top(); s.pop();
            s.push(t1 * t2);
        }
        else {
            s.push(stoi(str));
        }
    }
    cout << s.top() << endl;
}