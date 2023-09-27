#include<iostream>
#include <stdio.h>
using namespace std;

int main(){
    int a,b;
    string op;
    int ans;
    
    for (;;){
        cin >> a >> op >> b;
        if ( op == "+"){
            ans = a + b;
        } else if ( op == "-"){
            ans = a - b;
        } else if ( op == "*"){
            ans = a * b;
        } else if ( op == "/"){
            ans = a / b;
        }else {
            break;
        }
        printf("%d\n", ans);
    }
    
    return 0;
}