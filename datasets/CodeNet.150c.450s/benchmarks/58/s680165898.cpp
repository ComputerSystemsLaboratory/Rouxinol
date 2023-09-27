#include <iostream>
#include <stack>
using namespace std;

int main() {
    string symbol;
    
    stack<int> S;
    
    while(cin >> symbol){
        if(symbol == "+"){
            int a = S.top();
            S.pop();
            int b = S.top();
            S.pop();
            S.push(b+a);
        }else if(symbol == "-"){
            int a = S.top();
            S.pop();
            int b = S.top();
            S.pop();
            S.push(b-a);
        }else if(symbol=="*"){
            int a = S.top();
            S.pop();
            int b = S.top();
            S.pop();
            S.push(b*a);
        }else{
            int i = stoi(symbol);
            S.push(i);
        }
    }
    
    cout << S.top()<<endl;
    
    return 0;
}