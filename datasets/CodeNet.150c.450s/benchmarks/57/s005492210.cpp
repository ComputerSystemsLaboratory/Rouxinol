#include<iostream>
using namespace std;

int main(){
  int a,b;
  char c;
  while(cin>>a>>c>>b,c!='?'){
    int result=0;
    switch(c){
    case '+':
      result = a + b;
      break;
    case '-':
      result = a - b;
      break;
    case '*':
      result = a * b;
      break;
    case '/':
      result = a / b;
      break;
    }
    cout<<result<<endl;
  }

  return 0;
}