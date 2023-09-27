#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class stack{
private:
    int array[100];
    int top;
public:
    stack() {
        top = -1;
    }
    void push(int val) {
        top++;
        array[top] = val;
    }
    int pop() {
        int ret = array[top];
        top--;
        return ret;
    }
};


int main(void)
{
    stack st1;
    string s;
    while (cin >> s) {
        if (s == "+") {
            int op2 = st1.pop();
            int op1 = st1.pop();
            st1.push(op1 + op2);
            continue;
        }
        if (s == "*") {
            int op2 = st1.pop();
            int op1 = st1.pop();
            st1.push(op1 * op2);
            continue;
        }
        if (s == "-") {
            int op2 = st1.pop();
            int op1 = st1.pop();
            st1.push(op1 - op2);
            continue;
        }
        st1.push(atoi(s.c_str()));
    }
    cout << st1.pop() << endl;

    return 0;
}