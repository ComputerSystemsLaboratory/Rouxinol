#include <iostream>
#include<string>
using namespace std;
int main(){
    int a,b;
    string op;
    for(int i=0;i<1000000;i++){
    cin>>a;
    cin>>op;
    cin>>b;
    if(op=="+"){
    cout<<a+b<<endl;
        }
    if(op=="-"){
        cout<<a-b<<endl;
        }
    if(op=="*"){
        cout<<a*b<<endl;
        }
    if(op=="/"){
        cout<<a/b<<endl;
        }
    if(op=="?"){
        break;
        }
                          }
}
