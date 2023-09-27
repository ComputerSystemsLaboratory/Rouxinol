#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
        int a,b;
        char op;

        while(true){
                cin >> a >> op >> b;
                if(op == '?')break;

                switch(op){
                        case '+':
                                cout << a + b << "\n";
                                break;

                        case '-':
                                cout << a - b << "\n";
                                break;

                
                        case '*':
                                cout << a * b << "\n";
                                break;
                
                
                        default:
                                cout << a / b << "\n";
                }
        }

        return 0;
}