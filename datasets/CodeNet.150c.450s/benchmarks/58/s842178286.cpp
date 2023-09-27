#include <iostream>
#include <vector>
#include <string>

using namespace std;

template<typename T>
class Stack {
public:
    Stack() {}

    void push(T a) {
        v.push_back(a);
    }

    T pop() {
        T last = v.back();
        v.pop_back();
        return last;
    }

private:
    vector<T> v;
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