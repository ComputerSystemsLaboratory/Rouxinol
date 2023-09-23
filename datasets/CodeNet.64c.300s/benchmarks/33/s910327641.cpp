#include <iostream>
using namespace std;
int main(void){
    int x,y;
    char op;
    
    while(cin>>x>>op>>y,op!='?'){
        switch(op){
            case '+': cout<<x+y<<endl;
                break;
            case '-': cout<<x-y<<endl;
                break;
            case '*': cout<<x*y<<endl;
                break;
            case '/': cout<<x/y<<endl;
                break;
        }
    }
    return 0;
}

