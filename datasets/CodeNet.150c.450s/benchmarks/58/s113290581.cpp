#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
//#include <bits/stdc++.h>で全部入る。

using namespace std;

template <class T>
class Stack{
  //メンバ関数
public:
  struct Node{
    Node* prev; //前のノードへのポインタ
    Node* next; //後のノードへのポインタ
    T value; //このノードに格納されているデータ
  };
private:
  Node* top;
  int max;
  int element_num;
public:
  Stack(int num);
  T pop();
  void push(T val);
  bool isEmpty();
  bool isFull();
};

template <class T>
Stack<T>::Stack(int num){
  top = 0;
  max = num;
  element_num = 0;
}

template <class T>
T Stack<T>::pop(){
  if(isEmpty()){
    printf("This Stack is empty.\n");
    return 0;
  }
  T out = top->value;
  top = top->next;
  if(element_num > 1){
    delete top->prev;
    top->prev = 0;
  }
  element_num--;
  return out;
}

template <class T>
void Stack<T>::push(T val){
  if(isFull()){
    printf("This Stack is full.\n");
    return;
  }
  Node* next_top = new Node;
  next_top->value = val;
  next_top->prev = 0;
  next_top->next = top;
  if(element_num > 0)
    top->prev = next_top;
  top = next_top;
  element_num++;
  return;
}

template <class T>
bool Stack<T>::isEmpty(){
  if(top == 0) return true;
  return false;
}

template <class T>
bool Stack<T>::isFull(){
  if(element_num == max) return true;
  return false;
}

int main(){
  Stack<int>* s = new Stack<int>(200);
  string c;
  while(cin >> c){
    if(c[0] == '+'){
      int op1 = s->pop();
      int op2 = s->pop();
      s->push(op2+op1);
      //fprintf(stderr,"%d+%d=%d\n",op2,op1,op2+op1);
      continue;
    }
    if(c[0] == '-'){
      int op1 = s->pop();
      int op2 = s->pop();
      s->push(op2-op1);
      //fprintf(stderr,"%d-%d=%d\n",op2,op1,op2-op1);
      continue;
    }
    if(c[0] == '*'){
      int op1 = s->pop();
      int op2 = s->pop();
      s->push(op2*op1);
      //fprintf(stderr,"%d*%d=%d\n",op2,op1,op2*op1);
      continue;
    }
    else{
      int num = 0;
      for(int i = 0;c[i] != '\0';i++){
        num = num*10 + (c[i]-'0');
      }
      //fprintf(stderr,"%d\n",num);
      s->push(num);
    }
  }
  int result = s->pop();
  printf("%d\n",result);
  delete s;
  return 0;
}

