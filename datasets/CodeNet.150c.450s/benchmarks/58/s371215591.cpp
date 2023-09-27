#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    string str;
    stack<int> S;


    while( cin >> str ){
        if ( str[0] == '+' ){
            int a = S.top();
            S.pop();
            int b = S.top();
            S.pop();
            S.push(a+b);
        } else if ( str[0] == '-' ){
            int b = S.top();
            S.pop();
            int a = S.top();
            S.pop();
            S.push(a-b);
        } else if ( str[0] == '*' ){
            int a = S.top();
            S.pop();
            int b = S.top();
            S.pop();
            S.push(a*b);
        } else {
            int x = stoi(str);
            S.push(x);
        }
    }
    cout << S.top() << endl;
    return 0;
}
