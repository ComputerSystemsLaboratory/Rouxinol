#include <iostream>
#include <cstdlib>
#include <stack>
#include <string>

int main(int argc, char const *argv[])
{
    std::stack<int> S;
    int a,b,x;
    std::string s;

    while(std::cin >> s){
        if(s[0] == '+'){
            a = S.top();
            S.pop();

            b = S.top();
            S.pop();

            S.push(a + b);
        }
        else if(s[0] == '-'){
            a = S.top();
            S.pop();

            b = S.top();
            S.pop();

            S.push(b - a);
        }
        else if(s[0] == '*'){
            a = S.top();
            S.pop();

            b = S.top();
            S.pop();

            S.push(a * b);
        }
        else{
            S.push(atoi(s.c_str()));
        }
    }

    std::cout << S.top() << std::endl;

    return 0;
}

