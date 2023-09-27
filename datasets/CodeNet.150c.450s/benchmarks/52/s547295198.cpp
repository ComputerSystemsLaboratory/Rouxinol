#include <stdio.h>
const int SIZE = 100;
int data[SIZE];
int sp= 0;


int top(){
 return data[sp-1];
}
void pop(){
 sp--;
}

void push(int v){
 data[sp] = v;
 sp++;
}

int main(){
 int v;
 while(scanf("%d", &v) != EOF){
  if(v != 0){
   push(v);
  }
  if(v == 0){
   printf("%d\n", top());
   pop();
  }
 }
 return 0;
}