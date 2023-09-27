#include <iostream>
#include <cstdlib>
#include <stack>
using namespace std;

int main() {
    stack<int> S;
    string s;
    int lhs;
    int rhs;

    while(cin >> s) {
        if(s == "+") {
            rhs = S.top();
            S.pop();
            lhs = S.top();
            S.pop();
            S.push(lhs + rhs);
        } else if (s == "-") {
            rhs = S.top();
            S.pop();
            lhs = S.top();
            S.pop();
            S.push(lhs - rhs);
        } else if (s == "*") {
            rhs = S.top();
            S.pop();
            lhs = S.top();
            S.pop();
            S.push(lhs * rhs);
        } else {
            S.push(atoi(s.c_str()));
        }
    }
    cout << S.top() << endl;
}