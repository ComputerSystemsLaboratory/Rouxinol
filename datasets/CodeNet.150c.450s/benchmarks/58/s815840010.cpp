#include <iostream>
#include <stack>
#include <sstream>
#include <string>

int main()
{
    std::stack<int> Stack;
    // while(std::cin.eof() == false){
    // while(std::cin){
    while(true){
        std::string in;
        std::cin >> in;
        if(!std::cin.good()){
            break;
        }
        switch(in[0]){
        case '+':{
            int a = Stack.top();
            Stack.pop();
            int b = Stack.top();
            Stack.pop();
            Stack.push(b + a);
            break;
        }
        case '-':{
            int a = Stack.top();
            Stack.pop();
            int b = Stack.top();
            Stack.pop();
            Stack.push(b - a);
            break;
        }
        case '*':{
            int a = Stack.top();
            Stack.pop();
            int b = Stack.top();
            Stack.pop();
            Stack.push(b * a);
            break;
        }
        default:{
            int Num;
            std::stringstream ss;
            ss << in;
            ss >> Num;
            Stack.push(Num);
            break;
        }
        }
    }
    std::cout << Stack.top() << std::endl;
    return 0;
}