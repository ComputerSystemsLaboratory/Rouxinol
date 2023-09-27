#include <cstdlib>
#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include <list>

typedef std::list<std::string> TList;
TList SplitString(std::string S)
{
    TList List;
    std::istringstream Input(S);
    std::string s;
    while(getline(Input, s, ' ')){
        List.push_back(s);
    }
    return List;
}
TList GetInputStrings(std::istream& Input)
{
    TList List;
    std::string Line;
    std::getline(Input, Line);
    return SplitString(Line);
}
int Rpn(const TList& List)
{
    std::stack<int> Stack;
    for(TList::const_iterator It = List.begin();
        It != List.end();
        ++It)
    {
        switch((*It)[0]){
        case '+':{
            int a = Stack.top(); Stack.pop();
            int b = Stack.top(); Stack.pop();
            Stack.push(b + a);
            break;
        }
        case '-':{
            int a = Stack.top(); Stack.pop();
            int b = Stack.top(); Stack.pop();
            Stack.push(b - a);
            break;
        }
        case '*':{
            int a = Stack.top(); Stack.pop();
            int b = Stack.top(); Stack.pop();
            Stack.push(b * a);
            break;
        }
        default:{
            Stack.push(std::atoi(It->c_str()));
            break;
        }
    }
    }
    return Stack.top();
}
int main()
{
    TList List = GetInputStrings(std::cin);
    std::cout << Rpn(List) << std::endl;
    return 0;
}