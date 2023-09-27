#include<iostream>
#include<stdio.h>
#include<string>
#include<cstdlib>
using namespace std;

int S[199];

int top = 0;


int pop(){
  top = top - 1;
  return S[top + 1];
}

void push(int o){
  top = top + 1;
  S[top] = o;
}

int main(){

  int o1, o2;

  char *e = new char[100];



  while(cin >> e){

    if(e[0] == '+'){
      o1 = pop();
      o2 = pop();
      push(o1 + o2);
    }else if(e[0] == '-'){
      o1 = pop();
      o2 = pop();
      push(o2 - o1);
    }else if(e[0] == '*'){
      o1 = pop();
      o2 = pop();
      push(o2 * o1);
    }else{
      push(atoi(e));
    }
  }

  cout << S[top] << endl;

  delete[] e;

  return 0;
}

