#include    <iostream>
#include    <string>
#include    <stack>

using namespace std;

int main() {
    stack<int> operand;
    while(1) {
        int r, l;
        string str;

        cin >> str;
        if(cin.eof())   break;

        if(str == "*") {
            l = operand.top();
            operand.pop();
            r = operand.top();
            operand.pop();
            operand.push(r*l);
        } else if(str == "+") {
            l = operand.top();
            operand.pop();
            r = operand.top();
            operand.pop();
            operand.push(r+l);
        } else if(str == "-") {
            l = operand.top();
            operand.pop();
            r = operand.top();
            operand.pop();
            operand.push(r-l);
        } else {
            operand.push(stoi(str));
        }
    }
    cout << operand.top() << endl;

    return 0;
}
