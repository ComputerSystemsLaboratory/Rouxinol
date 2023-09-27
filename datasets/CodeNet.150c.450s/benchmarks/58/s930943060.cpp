#include <iostream>
#include <stack>
#include <string>
#include <stdlib.h>
using namespace std;

int main(){
    stack<int> S;
    string s;
    int a,b;
    while(cin >> s){
        switch (s[0]){
            case '+':
                a = S.top();
                S.pop();
                b = S.top();
                S.pop();
                S.push(b+a);
                break;
            case '-':
                a = S.top();
                S.pop();
                b = S.top();
                S.pop();
                S.push(b-a);
                break;
            case '*':
                a = S.top();
                S.pop();
                b = S.top();
                S.pop();
                S.push(b*a);
                break;
            case '/':
                a = S.top();
                S.pop();
                b = S.top();
                S.pop();
                S.push(b/a);
                break;
            default:
                S.push(stoi(s));
        }
    }
    cout << S.top() << endl;
}