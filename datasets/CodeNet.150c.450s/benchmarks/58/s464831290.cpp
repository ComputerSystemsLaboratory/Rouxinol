#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main(){
    stack<int> stk;
    string s;
    while(cin >> s){
        int a,b;
        if(s=="+"){
            a=stk.top();
            stk.pop();
            b=stk.top();
            stk.pop();
            stk.push(a+b);
        }else if(s=="-"){
            a=stk.top();
            stk.pop();
            b=stk.top();
            stk.pop();
            stk.push(b-a);
        }else if(s=="*"){
            a=stk.top();
            stk.pop();
            b=stk.top();
            stk.pop();
            stk.push(a*b);
        }else{
            stk.push(stoi(s));
        }
    }

    cout << stk.top() << endl;
    
    return 0;
}
