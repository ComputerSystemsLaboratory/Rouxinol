#include <iostream>
using namespace std;
int main(void){
    int a,b;
    char op;
    cin>>a>>op>>b;
    while(1){
    if (op=='?'){break;}
    if (op=='+'){
        cout<<a+b<<endl;
    } else if(op=='-'){
        cout<<a-b<<endl;
    } else if(op=='*'){
        cout<<a*b<<endl;
    } else if(op=='/'){
        cout<<a/b<<endl;
    }
    cin>>a>>op>>b;
    }
    return 0;
}
