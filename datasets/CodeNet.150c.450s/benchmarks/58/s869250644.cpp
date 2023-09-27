#include<iostream>
#include<cstdlib>

using namespace std;

int top=0,S[200];


void push(int elem){
    ++top;
    S[top]=elem;
    return;
}

int pop(){
    --top;
    return S[top+1];
}

int main(){
    int a,b;
    char C[200];
    while(cin >> C){
        if(C[0]=='+'){
            a=pop();
            b=pop();
            push(a+b);
        }

        else if(C[0]=='-'){
            b=pop();
            a=pop();
            push(a-b);
        }

        else if(C[0]=='*'){
            a=pop();
            b=pop();
            push(a*b);
        }
        else {
            push(atoi(C));
        }
    }
    cout<<pop()<<endl;
    return 0;
}