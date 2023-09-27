#include <cstdlib>
#include <iostream>
#include <stack>
#include <string>

typedef std::stack<std::string> TStack;
TStack GetInputStrings(std::istream& Input)
{
    TStack Stack;
    std::string s;
    while(std::getline(Input, s, ' ')){
        Stack.push(s);
    }
    return Stack;
}
int Rpn(TStack& Stack)
{
    std::string s = Stack.top(); Stack.pop();
    switch(s[0]){
       case '+':{
            int a = Rpn(Stack);
            int b = Rpn(Stack);
            return b + a;
        }
        case '-':{
            int a = Rpn(Stack);
            int b = Rpn(Stack);
            return b - a;
        }
        case '*':{
            int a = Rpn(Stack);
            int b = Rpn(Stack);
            return b * a;
        }
        default:{
            return std::atoi(s.c_str());
        }
    }
}
int main()
{
    TStack Stack = GetInputStrings(std::cin);
    std::cout << Rpn(Stack) << std::endl;
    return 0;
}