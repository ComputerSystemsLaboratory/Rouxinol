
#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<cstdlib>
using namespace std;

int main(){
    stack<int> s;
    int a, b;
    string str;
    
    while(cin>>str){
        if(str=="+"){
            a=s.top(); s.pop();
            b=s.top(); s.pop();
            s.push(a+b);
        }else if(str=="-"){
            a=s.top(); s.pop();
            b=s.top(); s.pop();
            s.push(b-a);
        }else if(str=="*"){
            a=s.top(); s.pop();
            b=s.top(); s.pop();
            s.push(a*b);
        }else s.push(atoi(str.c_str()));
    }
    cout<<s.top()<<endl;
}

