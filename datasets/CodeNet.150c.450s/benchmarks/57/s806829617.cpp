#include<iostream>
using namespace std;
int main(){
    int a,b;
    char p;
    for(;;){
    cin>>a>>p>>b;
    if(p=='+')cout<<a+b<<endl;
    if(p=='-')cout<<a-b<<endl;
    if(p=='*')cout<<a*b<<endl;
    if(p=='/')cout<<a/b<<endl;
    if(p=='?')exit(0);
    }
    return 0;
}