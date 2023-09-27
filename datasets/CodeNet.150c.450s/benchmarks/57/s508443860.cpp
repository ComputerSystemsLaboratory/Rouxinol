#include <iostream>
#include<stdio.h>
using namespace std;
int main(void){
    char op;
    int a,b,x;
    for(;;){
        cin>>a>>op>>b;
        if(op == '?'){
            break;
        }
        if(op == '+'){
            x = a + b;
        }
        if(op == '-'){
            x = a - b;
        }
        if(op == '*'){
            x = a * b;
        }
        if(op == '/'){
            x = a / b;
        }
        cout<<x<<endl;
    }
}
