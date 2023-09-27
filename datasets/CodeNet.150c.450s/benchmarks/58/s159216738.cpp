#include<iostream>
#include<cstdlib>
#include<stack>
#include<string>

using namespace std;

int main(){

    stack<int> S;
    string s;
    int a, b, c;

    while(cin >> s){
        if(s[0] == '\n') break;
        if(s[0] == '+'){
            a = S.top(); S.pop();
            b = S.top(); S.pop();
            c = b + a;
            S.push(c);
        }else if(s[0] == '-'){
            a = S.top(); S.pop();
            b = S.top(); S.pop();
            c = b - a;
            S.push(c);
        }else if(s[0] == '*'){
            a = S.top(); S.pop();
            b = S.top(); S.pop();
            c = b * a;
            S.push(c);
        
        }else{
            S.push(atoi(s.c_str())); 
        }
    
    }

    cout << S.top() << endl;
}