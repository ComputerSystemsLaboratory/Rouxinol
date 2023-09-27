#include<stdio.h>
const int SIZE=100;
int data[SIZE]={0};
int sp=0;
int size(){
  return sp;
}
int empty(){
  return sp<=0;
}
int isfull(){
  return sp>=SIZE;
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
  int k,n;
  for(k=0;k<100;k++){
    scanf("%d",&n);
    if(empty()&&n==0)break;
    if(!empty()&&n==0){
      printf("%d\n",top());
      pop();
    }else if(!isfull()){
      push(n);
    }
  }
  return 0;
}