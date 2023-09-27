#include <iostream>
#include <string>
#include <stack>
#include<cstdlib>
using namespace std;

int main (){
    int n,m;
    stack<int> operand;
    string g;

    while(cin >> g){
                if ("+" == g) {
                    n = operand.top();
                    operand.pop();
                    m = operand.top();
                    operand.pop();
                    operand.push(n + m);
                }
                else if ("-" == g) {
                    n = operand.top();
                    operand.pop();
                    m = operand.top();
                    operand.pop();
                    operand.push(m - n);
                }
                else if ("*" == g) {
                    n = operand.top();
                    operand.pop();
                    m = operand.top();
                    operand.pop();
                    n = n * m;
                    operand.push(n);
                }
                else {
                    operand.push(atoi(g.c_str()));
                }
    }
    cout << operand.top() << endl;
    return 0;
}