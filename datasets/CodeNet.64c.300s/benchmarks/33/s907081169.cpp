#include<iostream>
#include<cstdio>
using namespace std ;
int main()  {
  int a,b,i;
  char op;
  for( ; ; ){
 cin>>a>>op>>b;
 
 if(op=='+'){
      i=a+b;
    }
    if(op=='-'){
	i=a-b;
    }
    if(op=='*'){
        i=a*b;
    }
    if(op=='/'){
	  i=a/b;
    }
    if(op=='?')break;
     cout<<i<<endl;
  }
  return 0;
}