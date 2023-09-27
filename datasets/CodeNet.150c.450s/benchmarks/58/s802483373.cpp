#include <stack>
#include <iostream>
using namespace std;

int main() {
    stack<int> s;
    string str;

    while (cin >> str) {
        if (str[0] == '+') {
            auto rhs = s.top(); s.pop();
            auto lhs = s.top(); s.pop();
            s.push(lhs + rhs);
        }
        else if (str[0] == '-') {
            auto rhs = s.top(); s.pop();
            auto lhs = s.top(); s.pop();
            s.push(lhs - rhs);
        }
        else if (str[0] == '*') {
            auto rhs = s.top(); s.pop();
            auto lhs = s.top(); s.pop();
            s.push(lhs * rhs);
        }
        else {
            s.push(std::atoi(str.c_str()));
        }
    }

    cout << s.top() << endl;
    return 0;
}
