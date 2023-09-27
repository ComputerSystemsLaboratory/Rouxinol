#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>

using namespace std;

int top = 0,s[200];

void push(int x){
  s[top++] = x;
}

int pop(){
  top--;
  return s[top];
}

int main() {
  char x[0];
  int a,b;
  while(cin >> x){
    if(x[0]=='+'){
      a=pop();
      b=pop();
      push(a+b);
    }
    else if(x[0]=='-'){
      a=pop();
      b=pop();
      push(b-a);
    }
    else if(x[0]=='*'){
      a=pop();
      b=pop();
      push(a*b);
    }
    else {
      push(atoi(x));
    }
  }

  cout << pop() << endl;
}