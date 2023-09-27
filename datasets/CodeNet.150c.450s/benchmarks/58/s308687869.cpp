//
//  main.cpp
//  c++proj
//
//  Created by chiiia12 on 2016/04/18.
//
//
#include <stdlib.h>
#include <iostream>

using namespace std;
int top,S[1000];
void push(int x){
//    cout<<"x:"<<x<<endl;
    S[++top]=x;
}
int pop(){
    top--;
    return S[top+1];
}
int main() {
    top = 0;
    string s;
    while(cin>>s){
        if(s=="+"){
            push(pop()+pop());
        }else if(s=="-"){
            int a = pop();
            int b = pop();
            push(b-a);
        }else if(s=="*"){
            push(pop()*pop());
        }else if(s=="/"){
            push(pop()/pop());
        }else{
            push(stoi(s));
//            push(atoi(s.c_str()));
        }
    }
    cout<<pop()<<endl;
    
    return 0;
}