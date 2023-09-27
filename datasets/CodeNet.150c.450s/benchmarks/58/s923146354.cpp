#include<stdio.h>
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int top,S[1000];

void push(int x){
 S[++top]=x;
}

int pop(){
 top--;
 return S[top+1];
}

int main(){
int v;
char n[100];
while (scanf("%s", n) != EOF){
  if (n[0] == '+'){
    v=pop() + pop();
   push(v);
  }else if (n[0] == '-'){
    int b=pop();
    int a=pop();

   push(a-b);
  }else if (n[0] == '*'){
    v=pop() * pop();
   push(v);
  }else {
   push(atoi(n));
  }
}
  printf("%d\n",pop());
  return 0;
}