#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>
using namespace std;

class poland{
private:
    stack<int> S;
public:
    void push_num(int num) {
        S.push(num);
    }
    int top_num() {
        return S.top();
    }
    void calc(string symbol) {
        int op2 = S.top();
        S.pop();
        int op1 = S.top();
        S.pop();
        if (symbol == "+") S.push(op1 + op2);
        if (symbol == "-") S.push(op1 - op2);
        if (symbol == "*") S.push(op1 * op2);
    }
};

int main()
{
    string s;
    poland P;
    while (cin >> s) {
        if (s == "+" || s == "-" || s == "*") {
            P.calc(s);
            continue;
        }
        P.push_num(atoi(s.c_str()));
    }
    cout << P.top_num() << endl;

    return 0;
}