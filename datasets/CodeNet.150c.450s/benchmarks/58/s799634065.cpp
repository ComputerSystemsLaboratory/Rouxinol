#include <bits/stdc++.h>
using namespace std;

class Stack {
    private:
        int head;
        int buf[1 << 20];
    public:
        Stack() { head = 0; }
        void push(int x) {
            buf[head++] = x;
        }
        int pop() {
            return buf[--head];
        }
        bool isEmpty() {
            return head == 0;
        }
};

int main() {
    string inp;
    Stack s;
    while (cin >> inp) {
        char c = inp[0];
        if (c == '+' || c == '-' || c == '*') {
            int a = s.pop(), b = s.pop();
            switch (c) {
                case '+':
                    s.push(a + b);
                    break;
                case '-':
                    s.push(b - a);
                    break;
                case '*':
                    s.push(a * b);
                    break;
            }
        }
        else {
            s.push(stoi(inp));
        }
    }
    cout << s.pop() << "\n";
    return 0;
}