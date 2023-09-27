#include <iostream>
#include <string>
#include <stack>
using namespace std;

void calc(char ch, stack<int> & nums){
    int num = nums.top();
    nums.pop();
    if (ch == '*'){
        nums.top() *= num;
    }else if (ch == '+'){
        nums.top() += num;
    }else if (ch == '-'){
        nums.top() -= num;
    }
}


int main()
{
    string equation;
    getline(cin, equation);    
    stack<int> nums;
    int eqlen = equation.size();
    int num = 0;
    bool isNumber = true;
    for (int i = 0; i!= eqlen; ++i){
        auto ch = equation[i];
        if (ch == ' '){
            if (isNumber){
                nums.push(num);
                num = 0;
            }
        }else if(ch == '*' || ch == '+' || ch == '-'){
            isNumber = false;
            calc(ch, nums);
        }else{
            isNumber = true;
            num *= 10;
            num += static_cast<int>(ch) - static_cast<int>('0');
        }
    }
    cout << nums.top() << endl;
    
    return 0;
}