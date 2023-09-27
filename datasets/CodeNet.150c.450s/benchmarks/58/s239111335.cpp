#include<iostream>
#include<cctype>
#include<stack>
using namespace std;

int main(){

    stack<int> s;
    char c[100];
    while(cin>>c){
        int a,b;
        if(c[0]=='+'){
            a=s.top();s.pop();
            b=s.top();s.pop();
            s.push(b+a);
        }
        else if(c[0]=='-'){
            a=s.top();s.pop();
            b=s.top();s.pop();
            s.push(b-a);
        }
        else if(c[0]=='*'){
            a=s.top();s.pop();
            b=s.top();s.pop();
            s.push(b*a);
        }
        else
            s.push(atoi(c));
    }
    cout<<s.top()<<endl;
    s.pop();
}
