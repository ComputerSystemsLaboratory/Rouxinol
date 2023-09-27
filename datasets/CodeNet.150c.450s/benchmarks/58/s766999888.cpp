#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int top;

int pop(int* s){
    top--;
    return s[top+1];
}

void push(int* s,int num){
    top++;
    s[top]=num;
}

int main(){
    int stacks[1000];
    int a,b;
    top=-1;
    string s;
    while(cin >> s){
        if(s=="+"){
            a=pop(stacks);
            b=pop(stacks);
            push(stacks,a+b);
        }
        else if(s=="-"){
            a=pop(stacks);
            b=pop(stacks);
            push(stacks,b-a);
        }
        else if(s=="*"){
            a=pop(stacks);
            b=pop(stacks);
            push(stacks,a*b);
        }
        else{
            push(stacks,atoi(s.c_str()));//string???????????°???char???????????????????????????????????????
        }
    }
    cout << stacks[top] <<endl;
}