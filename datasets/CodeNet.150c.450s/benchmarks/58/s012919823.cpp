#include <iostream>
#include <string>
#include <stdio.h>
#include <cstdlib>

static const int MAX = 200000;
using namespace std;

int S[MAX], top=0;

void push(int x){
  S[++top] = x;
}

int pop(){
  top--;
  return S[top+1];
}

int main(int argc, const char * argv[]) {
  int a, b;
  top = 0;
  
  char s[100];
  while(cin >> s){
    if(cin.eof())
      break;
    if(s[0] == '+'){
      a = pop();
      b = pop();
      push(a + b);
    } else if(s[0] == '-'){
      b = pop();
      a = pop();
      push(a - b);
    } else if(s[0] == '*'){
      a = pop();
      b = pop();
      push(a * b);
    } else{
      push(atoi(s));
    }
  }
  printf("%d\n", pop());
  return 0;
}

