#include <iostream>
#include <string>
#include <vector>
using namespace std;

int Calc(int a, int b, string op);

int Calc(int a, int b, string op)
{
    if(op == "+"){
        return a+b;
    } else if(op == "-"){
        return a-b;
    } else if(op == "*"){
        return a*b;
    } else{
        return a/b;
    }
}

int main(void){
    int a, b;
    string op;
    vector<int> Answer;
    
    while(1){
        std::cin >> a;
        std::cin >> op;
        std::cin >> b;
        
        if(op == "?")   break;
        
        Answer.push_back(Calc(a, b, op));
    }

    for(int i = 0; i < Answer.size(); i++){
        std::cout << Answer[i] << std::endl;
    }
}