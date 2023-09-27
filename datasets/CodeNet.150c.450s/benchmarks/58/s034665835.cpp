#include <iostream>
#include <cstdlib>
using namespace std;

int st[100];
int si=0;

int pop(){
  return st[--si];
}

void push(int val){
  st[si++]=val;
}

int main(){
  char t[10];
  int a,b;
  while (cin >>t){
    if ('0'<=t[0]&&t[0]<='9')push(atoi(t));
    else{
	b=pop();
	a=pop();
      if (t[0]=='+')push(a+b);
      else if (t[0]=='-')push(a-b);
      else if (t[0]=='*')push(a*b);
    }
  }
  cout << pop() << endl;
  return 0;
}