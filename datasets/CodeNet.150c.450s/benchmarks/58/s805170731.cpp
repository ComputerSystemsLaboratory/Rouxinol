
#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <cstdlib>
using namespace std;

int main() {
    stack<int> s;
    string in, buf;
    getline(cin, in);
    stringstream ss(in);
    
    while(ss >> buf){
        if(buf == "+"){
            int a = s.top(); s.pop();
            int b = s.top(); s.pop();
            s.push(a+b);
        }else if(buf == "-"){
            int a = s.top(); s.pop();
            int b = s.top(); s.pop();
            s.push(b-a);
        }else if(buf == "*"){
            int a = s.top(); s.pop();
            int b = s.top(); s.pop();
            s.push(a*b);
        }else{
            s.push(atoi(buf.c_str()));
        }
    }
    
    cout << s.top() << endl;
    return 0;
}