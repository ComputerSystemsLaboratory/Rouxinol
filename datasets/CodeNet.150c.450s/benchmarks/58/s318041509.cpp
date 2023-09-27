#include <stack>
#include <string>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main() {
    char s[100];
    stack<int> St;
    int l, r;
    while (scanf("%s", &s) != EOF) {
        switch (s[0]) {
            case '+':
                l = St.top();St.pop();
                r = St.top();St.pop();
                St.push(l + r);
                break;
            case '-':
                l = St.top();St.pop();
                r = St.top();St.pop();
                St.push(r - l);
                break;
            case '*':
                l = St.top();St.pop();
                r = St.top();St.pop();
                St.push(l * r);
                break;
            default:
                St.push(atoi(s));
                break;
        }
    }

    printf("%d\n", St.top());

    return 0;
}
