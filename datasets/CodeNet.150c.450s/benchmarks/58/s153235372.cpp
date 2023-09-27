#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<list>
#include<map>
#include<algorithm>

using namespace std;

class Stack {
    public:
    Stack(): v(100, 0){
        top = 0;
    }
    ~Stack(){}

    void Push(int arg) {
        top++;
        v[top] = arg;
    }

    int Pop() {
        top--;
        return v[top + 1];
    }

    private:
    int top;
    vector<int> v;
};

int main()
{
    int a, b;
    Stack stack;

    string s;
    while (cin >> s) {
        if (cin.eof()) {
            break;
        }
        if (s[0] == '+') {
            int a, b;
            b = stack.Pop();
            a = stack.Pop();
            stack.Push(a + b);
        } else if (s[0] == '-') {
            b = stack.Pop();
            a = stack.Pop();
            stack.Push(a - b);
        } else if (s[0] == '*') {
            b = stack.Pop();
            a = stack.Pop();
            stack.Push(a * b);
        } else {
            stack.Push(atoi(s.c_str()));
        }
    }

    cout << stack.Pop() << endl;

    return 0;
}

