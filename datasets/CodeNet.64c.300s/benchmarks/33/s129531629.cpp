#include <stdio.h>
#include <iostream>
using namespace std;
 
int main(){
    int a, b;
    char op;
    while(true){
        scanf("%d %c %d",&a, &op, &b);

        if(op=='?'){
            break;
        }
        switch(op){
        case '+':
            cout << a+b << endl;
            break;
        case '-':
            cout << a-b << endl;
            break;
        case '*':
            cout << a*b << endl;
            break;
        case '/':
            cout << a/b << endl;
            break;
        }
    }
}
