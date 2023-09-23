#include<iostream>

#include<cstdio>

using namespace std;

int main(){

  int a,b,x;

  char op;

  for( ; ; ){

    cin>>a>>op>>b;

    if(op=='+'){
      x=a+b;
    }else if(op=='-'){
      x=a-b;
    }else if(op=='*'){
      x=a*b;
    }else if(op=='/'){
      x=a/b;
    }
    else break;

    cout<<x<<endl;

  }




  return 0;
}