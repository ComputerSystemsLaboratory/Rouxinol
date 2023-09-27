#include <cstdlib>
#include <iostream>
#include <stack>

using namespace std;

char expr[10000];

int main() {
    stack<long> S;
    cin.getline(expr, 10000);
    char* s = expr;
    for (;;) {
        if (*s == '\0') { break; }
        if ('0' <= *s && *s <= '9') {
            S.push(strtol(s, &s, 10));
            if (*s == ' ') { ++s; }
        } else {
            long b = S.top(); S.pop();
            long a = S.top(); S.pop();
            long r = 0;
            switch (*s) {
                case '+':
                    r = a + b;
                    break;
                case '-':
                    r = a - b;
                    break;
                case '*':
                    r = a * b;
                    break;
            }
            ++s;
            if (*s == ' ') { ++s; }
            S.push(r);
        }
    }
    cout << S.top() << endl;
    return 0;
}