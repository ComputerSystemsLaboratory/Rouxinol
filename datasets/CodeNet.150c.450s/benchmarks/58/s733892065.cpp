#include<iostream>
#include<vector>
#include<string>
#define MAX 200
using namespace std;
class stack{
  public:
    stack();
    void push(int v);
    bool isFull();
    bool isEmpty();
    int pop();

  private:
    vector<int> values=vector<int>(MAX);
    int top=0;
};

stack::stack(){
}

void stack::push(int v){
  if (isFull()!=true){
    values[top+1]=v;
    top++;
  }
}

bool stack::isFull(){
  return top>=MAX-1;
}

bool stack::isEmpty(){
  return top==0;
}

int stack::pop(){
  if(isEmpty()!=true){
    top--;
    return values[top+1];
  }
}

int main(int argc,char* argv[]){
  int temp;
  string s;
  stack data;
  while(cin >> s){
    if(s=="*") data.push(data.pop()*data.pop());
    else if(s=="+") data.push(data.pop()+data.pop());
    else if(s=="-"){
      temp = -data.pop();
      data.push(temp+data.pop());
    }
    else data.push(stoi(s));
    
  }
  cout << data.pop() << endl;
}