#include <iostream>

using namespace std;

int a,b;
char op;
int main(){
 while(true){
  cin>>a>>op>>b;
  if(op=='+'){
   cout<<a+b<<endl;
  }else if(op=='-'){
   cout<<a-b<<endl;
  }else if(op=='*'){
   cout<<a*b<<endl;
  }else if(op=='/'){
   cout<<a/b<<endl;
  }else{
   break;
  }
 }
}