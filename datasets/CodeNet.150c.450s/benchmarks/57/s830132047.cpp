#include<iostream>
using namespace std;
int main(){
    int a,b,x,y,z,w;
    char op;
    while(true){
        cin>>a>>op>>b;
        if(op=='?'){
            break;
        }
        else{
           if(op=='+'){
               x=a+b;
               cout<<x<<endl;
           } 
           else if(op=='-'){
               y=a-b;
               cout<<y<<endl;
           }
           else if(op=='*'){
               z=a*b;
               cout<<z<<endl;
           }
           else if(op=='/'){
               w=a/b;
               cout<<w<<endl;
           }
        }
    }
    return 0;
}
