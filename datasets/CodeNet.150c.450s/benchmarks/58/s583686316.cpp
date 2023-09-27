#include <iostream>
#include <cstdlib>

template <typename T>
class stack{
  T a[101];
  unsigned n;
public:
  stack():a(),n(0){}
  T& top(){return a[n-1];}
  void pop(){n--;}
  void push(T in){a[n]=in;n++;}
};

int main(){
  stack<int> s;
  char buf[100];

  while(std::cin >> buf){
    int a;
    switch(buf[0]){
      case '+' : a = s.top();s.pop();s.top() += a;break;
      case '-' : a = s.top();s.pop();s.top() -= a;break;
      case '*' : a = s.top();s.pop();s.top() *= a;break;
      default : s.push(atoi(buf));
    }
  }
  std::cout << s.top() << std::endl;
}