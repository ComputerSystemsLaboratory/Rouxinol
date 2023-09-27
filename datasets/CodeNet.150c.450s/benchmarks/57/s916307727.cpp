#include <iostream>
using namespace std;
int main(void){
int a,b;
char op;

for(int i=0;i<20000;i++){
    
   cin >> a >> op >> b;
   
    if(op=='?'){
        break;
    }
    else if(op=='+'){
        cout<<a+b<<endl;
    }
   else if(op=='-'){
        cout<<a-b<<endl;
    }
    else if(op=='*'){
        cout<<a*b<<endl;
    }
   else if(op=='/'){
        cout<<a/b<<endl;
    }
    
    }
}
