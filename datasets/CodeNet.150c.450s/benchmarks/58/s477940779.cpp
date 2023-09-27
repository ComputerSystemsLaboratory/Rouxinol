#include <cstdio>
#include <stack>
#include <cstdlib>

using namespace std;

int arith_op(int lhs, int rhs, char op) {
    switch (op) {
        case '+':
            return lhs+rhs;
        case '-':
            return lhs-rhs;
        case '*':
            return lhs*rhs;
    }
    return 0;
}

int main() {
    stack<int> s;
    for (char buf[1<<4]; scanf("%s", buf)!=EOF;) {
        if (buf[0]>='0' && buf[0]<='9') {
            s.push(atoi(buf));
        } else {
            int rhs=s.top(); s.pop();
            int lhs=s.top(); s.pop();
            s.push(arith_op(lhs, rhs, buf[0]));
        }
    }

    printf("%d\n", s.top());
    return 0;
}