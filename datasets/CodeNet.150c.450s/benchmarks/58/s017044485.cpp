#include <iostream>
#include <array>
#include <stack>
#include <cstdlib>

constexpr int MAX_OP = 1000000;

std::stack<int> stacked;

void plus();
void minus();
void times();

int main()
{
    std::string symbol;
    while (std::cin >> symbol) {
        if (symbol == "+") {
            plus();
        } else if (symbol == "-") {
            minus();
        } else if (symbol == "*") {
            times();
        } else {
            stacked.push(atoi(symbol.c_str()));
        }
    }

    std::cout << stacked.top() << std::endl;

    return 0;
}

void plus()
{
    int op1 = stacked.top();
    stacked.pop();
    int op2 = stacked.top();
    stacked.pop();
    stacked.push(op1 + op2);
}

void minus()
{
    int op2 = stacked.top();
    stacked.pop();
    int op1 = stacked.top();
    stacked.pop();
    stacked.push(op1 - op2);
}

void times()
{
    int op1 = stacked.top();
    stacked.pop();
    int op2 = stacked.top();
    stacked.pop();
    stacked.push(op1 * op2);
}