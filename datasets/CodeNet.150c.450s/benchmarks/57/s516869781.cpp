#include <cstdio>
#include <iostream>
using namespace std;

int main(){
  int a,b;
  char op;
  int result;

  while(true){
    cin >> a >> op >> b; 
    if(op == '?'){
      break;
    }
 
    switch(op){
	case '+': result = a + b; break;
	case '-': result = a - b; break;
	case '*': result = a * b; break;
	case '/': result = a / b; break;
      }
    
    printf("%d\n",result);
  } 
 

}