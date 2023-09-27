#include<stdio.h>
const int SIZE=100;
int data[SIZE];
int sp=0;
int size(){
  return sp;
}
int empty(){
  return sp<=0;
}
int top(){
  return data[sp-1];
}
void pop(){
  sp--;
}
void push(int v){
  data[sp]=v;
  sp++;
}
int main(){
  int n,k;
  while(scanf("%d",&n)!=EOF){
    if(n==0){
      printf("%d\n",top());
      pop();
    }else{
      push(n);
    }
  }
  return 0;
}