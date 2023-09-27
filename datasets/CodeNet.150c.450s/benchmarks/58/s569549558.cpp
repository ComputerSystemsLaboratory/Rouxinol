#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class my_stack
{
private:
    int value[200];
    int top;

public:
    my_stack()
    {
        top = 0;
    }

    bool isEmpty()
    {
        return top == 0;
    }

    bool isFull()
    {
        return top >= 200 - 1;
    }

    void push(int n)
    {
        if(isFull())
        {
            cout << "Error: Stack is full." << endl;
            return;
        }
        value[++top] = n;
    }

    int pop()
    {
        if(isEmpty())
        {
            cout << "Error: Stack is empty." << endl;
            return -1;
        }
        return value[top--];
    }
};

int main(void)
{
    my_stack stack;
    string input;

    while(cin >> input)
    {
        if(input == "+")
        {
            int n1 = stack.pop();
            int n2 = stack.pop();
            stack.push(n1 + n2);
        }
        else if(input == "-")
        {
            int n1 = stack.pop();
            int n2 = stack.pop();
            stack.push(n2 - n1);
        }
        else if(input == "*")
        {
            int n1 = stack.pop();
            int n2 = stack.pop();
            stack.push(n1 * n2);
        }
        else
        {
            stack.push(atoi(input.c_str()));
        }
    }

    cout << stack.pop() << endl;

    return 0;
}