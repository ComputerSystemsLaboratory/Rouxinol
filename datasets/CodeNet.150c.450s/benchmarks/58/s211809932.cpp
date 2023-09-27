#include <iostream>
#include <string>

using namespace std;

template<typename T>
class Stack {
private:
    struct Node {
        T val;
        Node *next;
    };

    Node *top;

public:
    Stack() {
        top = new Node();
        top->next = NULL;
    }

    ~Stack() {
        while (top->next != NULL) {
            Node *top_old = top;
            top = top_old->next;
            delete top_old;
        }
        delete top;
    }

    void push(T a) {
        Node *top_old = top;
        top = new Node();
        top->val = a;
        top->next = top_old;
        return;
    }

    T pop() {
        if (top->next == NULL) {
            return NULL;
        } else {
            Node *top_old = top;
            T v = top_old->val;
            top = top_old->next;
            delete top_old;
            return v;
        }
    }
};

int64_t calc(Stack<string> &s) {
    string str = s.pop();
    if (str == "+") {
        return calc(s) + calc(s);
    } else if (str == "-") {
        int64_t a = calc(s);
        int64_t b = calc(s);
        return b - a;
    } else if (str == "*") {
        return calc(s) * calc(s);
    } else {
        return stoi(str);
    }
}

int main() {
    string str;
    Stack<string> s;

    while (cin >> str) s.push(str);
    cout << calc(s) << endl;

    return 0;
}