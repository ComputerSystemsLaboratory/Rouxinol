
#include<string>
#include<stack>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    string word;
    stack<int>S;
    int n,n1,n2,p;
    while(cin>>word){
        if(word=="+"){
            n1=S.top();
            S.pop();
            n2=S.top();
            S.pop();
            n=n1+n2;
            S.push(n);
        }
        else if(word=="-"){
            n1=S.top();
            S.pop();
            n2=S.top();
            S.pop();
            n=n2-n1;
            S.push(n);
        }
        else if(word=="*"){
            n1=S.top();
            S.pop();
            n2=S.top();
            S.pop();
            n=n1*n2;
            S.push(n);
        }
        else {
            p=atoi(word.c_str());
            S.push(p);
        }
    }
    cout<<S.top()<<endl;
    return 0;
}