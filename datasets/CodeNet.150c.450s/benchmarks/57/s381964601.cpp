#include <iostream>
#include <string>
using namespace std;
int main(void){
    while(1){
        int a,b,i;
        string str;
        cin>>a>>str>>b;
        if(str=="+"){
            cout<<a+b<<endl;
        }
        else if(str=="-"){
            cout<<a-b<<endl;
        }
        else if(str=="*"){
            cout<<a*b<<endl;
        }
        else if(str=="/"){
            cout<<a/b<<endl;
        }
        else{break;
        }
        i++;
    }
}