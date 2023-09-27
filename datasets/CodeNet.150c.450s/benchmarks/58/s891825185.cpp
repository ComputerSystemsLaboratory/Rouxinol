#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

class Stack
{
    int *data_;
    int totalCapacity_;
    int insertPos_;
public:
    Stack(int);
    int push(int);
    int pop(void);
    int getTotalCapacity(void) const;
    int isEmpty(void) const;
    int isFull(void) const;
};

Stack::Stack(int dataSize)
{
    data_ = new int[dataSize];
    totalCapacity_ = dataSize;
    insertPos_ = 0;
}

int Stack::push(int pushData)
{
    if (isFull()) return 1;
    data_[insertPos_] = pushData;
    insertPos_++;
    return 0;
}

int Stack::pop(void)
{
    if (isEmpty()) return 0;
    insertPos_--;
    return data_[insertPos_];
}

int Stack::getTotalCapacity(void) const
{
    return totalCapacity_;
}

int Stack::isEmpty(void) const
{
    if (insertPos_ == 0) return 1;
    return 0;
}

int Stack::isFull(void) const
{
    if (insertPos_ == totalCapacity_) return 1;
    return 0;
}

int main(void)
{
    int num1, num2;
    Stack stack(100);
    char inputTmp[7];
    char newLineCheck;

    while ("Main loop") {
        scanf("%s%c", inputTmp, &newLineCheck);
        switch (inputTmp[0]) {
        case '+':
            num1 = stack.pop();
            num2 = stack.pop();
            stack.push(num2 + num1);
            break;
        case '-':
            num1 = stack.pop();
            num2 = stack.pop();
            stack.push(num2 - num1);
            break;
        case '*':
            num1 = stack.pop();
            num2 = stack.pop();
            stack.push(num2 * num1);
            break;
        case '/':
            num1 = stack.pop();
            num2 = stack.pop();
            stack.push(num2 / num1);
            break;
        default:
            stack.push(atoi(inputTmp));
            break;
        }
        if (newLineCheck == '\n') break;
    }
    cout << stack.pop() << endl;

    return 0;
}