#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int a,b;
    char c;
    while(true){
        cin>>a>>c>>b;
        if(c=='+'){
            cout<<a+b<<endl;
        }
        if(c=='-'){
            cout<<a-b<<endl;
        }
        if(c=='*'){
            cout<<a*b<<endl;
        }
        if(c=='/'){
            cout<<a/b<<endl;
        }
        if(c=='?'){
            break;
        }
    }
    return 0;
}

