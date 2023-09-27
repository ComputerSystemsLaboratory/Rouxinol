#include <iostream>
#include <memory>
#include <sstream>

class stack {
public:
    stack(int size) : top_(0), size_(size),
                      array_(std::make_unique<int[]>(size)) {}

    bool is_full() { return this->top_ == this->size_; }

    bool is_empty() { return this->top_ == 0; }

    void push(int x) {
        if (this->is_full()) {
            throw std::runtime_error("this stack is full.");
        }
        this->array_[this->top_] = x;
        this->top_++;
    }

    int pop() {
        if (this->is_empty()) {
            throw std::runtime_error("this stack is empty.");
        }
        this->top_--;
        return this->array_[this->top_];
    }


private:
    int top_;
    int size_;
    std::unique_ptr<int[]> array_;
};

int main() {
    stack s(1000);
    std::string str;
    while (std::cin >> str) {
        if (str == "+") {
            auto rhs = s.pop();
            auto lhs = s.pop();
            s.push(lhs + rhs);
        }
        else if (str == "-") {
            auto rhs = s.pop();
            auto lhs = s.pop();
            s.push(lhs - rhs);
        }
        else if (str == "*") {
            auto rhs = s.pop();
            auto lhs = s.pop();
            s.push(lhs * rhs);
        }
        else {
            int x;
            std::stringstream ss(str);
            ss >> x;
            s.push(x);
        }
    }

    auto ans = s.pop();
    std::cout << ans << std::endl;
    return 0;
}
