#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int top,S[101];
string str;


void initialize() {
  top = 0;
}

int isEmpty() {
  return top == 0;
}

int isFull() {
  return top >= 100;
}

void push(int x) {
  if ( isFull() )cout << "overflow" << endl;
  else {
    top++;
    S[top] = x;
  }
}

int pop() {
  if ( isEmpty() ) cout << "underflow" << endl;
  else {
    top--;
    return S[top+1];
  }
}

int main() {
  
  initialize();
  
  int num1,num2;
  
  while ( cin >> str ) {
    
    if ( str[0] == '+') {
      num1 = pop();
      num2 = pop();
      push( num1 + num2 );
      
    }else if ( str[0] == '-' ) {
      
      num1 = pop();
      num2 = pop();
      push( num2 - num1 );
      
    }else if ( str[0] == '*' ) {
      
      num1 = pop();
      num2 = pop();
      push( num1 * num2 );
      
    } else {
      
      push(atoi(str.c_str()));
      
    }
    
  }
  
  cout << pop() << endl;

  return 0;
}