#include <iostream>
#include <stack>
#include <sstream>  
#include <string>

  
bool IsOp(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}
int main()
{
    std::stack<int> Stack;
    // while(std::cin.eof() == false){
    // while(std::cin){
    while(true){
        std::string in;
        std::cin >> in;
        if(std::cin.eof()){
            break;
        }
        if(IsOp(in[0]) == false){
            int Num;
            std::stringstream ss;
            ss << in;
            ss >> Num;
            Stack.push(Num);
            continue;
        }
        int a = Stack.top();
        Stack.pop();
        int b = Stack.top();
        Stack.pop();
        
        switch(in[0]){
        case '+': Stack.push(b + a); break;
        case '-': Stack.push(b - a); break;
        case '*': Stack.push(b * a); break;
        }
    }
    std::cout << Stack.top() << std::endl;
    return 0;
}