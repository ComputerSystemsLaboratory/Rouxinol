#include<iostream>
using namespace std;
int main(){  
  int a,b,c,d,e,f;
  char op;
  while(1){
    cin >> a >> op >> b;
    if(op=='?')break;
    else{
      if(op=='+'){
	int c=a+b;
	cout << c << endl;
      }
      else if(op=='-'){
	int c=a-b;
	cout<<c<<endl;
      }
      else if(op=='/'){
	int c=a/b;
	cout<<c<<endl;
      } 
      else if(op=='*'){
	int c=a*b;
	cout<<c<<endl;
      }
    }
  }
  return 0;
}