#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5;

class myStack{
public:
  int a[MAX];
  int top;
  myStack(){
    top = 0;
  }
  bool isEmpty(){
    return top == 0;
  }
  bool isFull(){
    return top >= MAX - 1;
  }
  void push(int x){
    if(isFull()) {cerr << "isFull." << endl; return;}
    top++;
    a[top] = x;
  }
  int pop(){
    if(isEmpty()) {cerr << "isEmpty." << endl; return 0;}
    top--;
    return a[top + 1];
  }
};

int main(){
  myStack s;
  string str;
  while(cin >> str){
    if(str == "+"){
      int a = s.pop();
      int b = s.pop();
      s.push(a + b);
    }
    else if(str == "-"){
      int a = s.pop();
      int b = s.pop();
      s.push(- a + b);
    }
    else if(str == "*"){
      int a = s.pop();
      int b = s.pop();
      s.push(a * b);
    }
    else{
      int a = stoi(str);
      s.push(a);
    }
  }
  cout << s.pop() << endl;
}

