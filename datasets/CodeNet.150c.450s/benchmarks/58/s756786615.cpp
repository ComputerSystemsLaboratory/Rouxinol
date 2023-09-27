#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    string s;
    stack<int> St;
    int l, r;
    while (cin >> s) {
        switch (s[0]) {
            case '+':
                l = St.top();
                St.pop();
                r = St.top();
                St.pop();
                St.push(l + r);
                break;
            case '-':
                l = St.top();
                St.pop();
                r = St.top();
                St.pop();
                St.push(r - l);
                break;
            case '*':
                l = St.top();
                St.pop();
                r = St.top();
                St.pop();
                St.push(l * r);
                break;
            default:
                St.push(atoi(s.c_str()));
                break;
        }
    }

    cout << St.top() << endl;

    return 0;
}
