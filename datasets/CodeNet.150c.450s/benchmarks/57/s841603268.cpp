#include <iostream>
#include <string>

using namespace std;

int main(void){
    int a,b;
    char n;
    while(cin>>a>>n>>b){
        if(n=='+')cout<<a+b<<endl;
        if(n=='-')cout<<a-b<<endl;
        if(n=='*')cout<<a*b<<endl;
        if(n=='/')cout<<a/b<<endl;
    }
    return 0;
}