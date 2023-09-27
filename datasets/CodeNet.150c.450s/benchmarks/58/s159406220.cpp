#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Stack {
public:
    Stack() {
        top_ = 0;
    }

    void push(int x) {
        stack_[top_] = x;
        top_++;
    }

    int pop() {
        top_--;
        return stack_[top_];
    }

private:
    int top_;
    int stack_[1000];
};

int main() {
    char str[100];
    int a;
    int b;
    Stack stack;
    string line;
    getline(cin, line);
    istringstream stream(line);
    while (stream >> str) {
        if (str[0] == '+') {
            a = stack.pop();
            b = stack.pop();
            stack.push(b + a);
        } else if (str[0] == '-') {
            a = stack.pop();
            b = stack.pop();
            stack.push(b - a);
        } else if (str[0] == '*') {
            a = stack.pop();
            b = stack.pop();
            stack.push(b * a);
        } else {
            stack.push(atoi(str));
        }
    }
    cout << stack.pop() << endl;
    return 0;
}