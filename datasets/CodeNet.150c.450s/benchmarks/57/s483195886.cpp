#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  int a,b;
  int flag=1;
  char op;
  while(flag){
    scanf("%d %c %d",&a, &op, &b);
    if(op=='+'){
      cout<<a+b<<endl;
    }else if(op=='-'){
      cout<<a-b<<endl;
    }else if(op=='*'){
      cout<<a*b<<endl;
    }else if(op=='/'){
      cout<<a/b<<endl;
    }else if(op=='?'){
      flag=0;
    }
  }
  return 0;
}