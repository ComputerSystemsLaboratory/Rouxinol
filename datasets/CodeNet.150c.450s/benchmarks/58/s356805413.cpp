#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <stack>
using namespace std;

int main(void)
{
    int num1, num2;
    stack<int> s;
    char inputTmp[7];
    char newLineCheck;

    while ("Main loop") {
        scanf("%s%c", inputTmp, &newLineCheck);
        switch (inputTmp[0]) {
        case '+':
            num1 = s.top(); s.pop();
            num2 = s.top(); s.pop();
            s.push(num2 + num1);
            break;
        case '-':
          num1 = s.top(); s.pop();
          num2 = s.top(); s.pop();
            s.push(num2 - num1);
            break;
        case '*':
          num1 = s.top(); s.pop();
          num2 = s.top(); s.pop();
            s.push(num2 * num1);
            break;
        case '/':
          num1 = s.top(); s.pop();
          num2 = s.top(); s.pop();
            s.push(num2 / num1);
            break;
        default:
            s.push(atoi(inputTmp));
            break;
        }
        if (newLineCheck == '\n') break;
    }
    cout << s.top() << endl;

    return 0;
}