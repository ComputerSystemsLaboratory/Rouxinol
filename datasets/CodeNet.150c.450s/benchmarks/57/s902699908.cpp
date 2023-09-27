#include <iostream>
#include <stdio.h>
using namespace std;
int main(void){
    
    int a,b;
    char op;
        
        while(op!='?'){
            switch(op){
                case'+':
                cout<<a+b<<endl;
                break;
                
                case'-':
                cout<<a-b<<endl;
                break;
                
                case'*':
                cout<<a*b<<endl;
                break;
                
                case'/':
                cout<<a/b<<endl;
                break;
                
            }
            cin>>a>>op>>b;
        }
    }

