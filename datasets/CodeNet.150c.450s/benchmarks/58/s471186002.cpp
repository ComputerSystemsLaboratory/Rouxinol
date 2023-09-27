#include <iostream>
#include <string>
#include <sstream>

class poland_element_stack {
public:
    poland_element_stack() : _data(), _pos(0) {}

    void push(const std::string& str) {
        if (str == "+") {
            const int e2 = this->pop();
            const int e1 = this->pop();
            this->push(e1 + e2);
            return;
        }
        if (str == "-") {
            const int e2 = this->pop();
            const int e1 = this->pop();
            this->push(e1 - e2);
            return;
        }
        if (str == "*") {
            const int e2 = this->pop();
            const int e1 = this->pop();
            this->push(e1 * e2);
            return;
        }
        if (str == "/") {
            const int e2 = this->pop();
            const int e1 = this->pop();
            this->push(e1 / e2);
            return;
        }
        this->push(std::atoi(str.c_str()));
        return;
    }

    int pop()
    {
        --_pos;
        const int ret = _data[_pos];
        return ret;
    }

private:
    void push(int x)
    {
        _data[_pos] = x;
        ++_pos;
    }

private:
    int _data[100];
    std::size_t _pos;
};

int main() {
    poland_element_stack stack;
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
 
    std::string input;
    getline(std::cin, input);
    std::stringstream stream(input);
    std::string field;
    while (getline(stream, field, ' ')) {
        stack.push(field);
    }
    std::cout << stack.pop() << std::endl;
    return 0;
}