#include<cstdio>
#include<cstdlib>
#include<stack>

using namespace std;

int main() {
        stack<int> s;
        char c[20];
        int a,b;

        while (scanf("%s", c) != EOF) {
                if (c[0] == '+' || c[0] == '-' || c[0] == '*') {
                        a = s.top();
                        s.pop();
                        b = s.top();
                        s.pop();
                        if ( c[0] == '+') s.push(b + a);
                        else if (c[0] == '-') s.push(b - a);
                        else s.push(b * a);
                } else {
                        s.push(atoi(c));
                }
        }
        printf("%d\n", s.top());
}