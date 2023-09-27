#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;
#define MAX 100

void push (int);
int pop (void);
int isempty (void);


int stack[MAX];
int idx = 0;

int main () {
  string c;
  int a, b,cnt=0;
  

  while (cin >>c) {



	    
	    // is num
	    
	    


    if (c == "+") {
      push(pop()+pop());
    } else if (c == "-") {
      a = pop();
      b = pop();
      push(b-a);
    } else if (c == "*") {
      push(pop()*pop());
    } else if (c == "/") {
      push(pop()/pop());
    } else{ //if (atoi(c.c_str()) >= 0 && atoi(c.c_str()) <= 9) {

      push (atoi(c.c_str()));
    } /*else {
      printf ("Unsupported charactor!\n");
    }
      */
    
    

  }
  
  
  printf("%d\n",stack[0]);
  return 0;
}
void push (int x) {
  //printf ("push v:%d idx:%d\n", x, idx);
  stack[idx] = x;
  idx ++;
  return;
}
int pop () {
  if (isempty() == 1) return NULL;
  idx --;
  //printf ("pop  v:%d idx:%d\n", stack[idx], idx);
	int t = stack[idx];
	stack[idx] = NULL;
	return t;
}
int isempty () {
  if (idx == 0) return 1;
  else return 0;
}