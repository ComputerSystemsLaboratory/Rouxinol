#include <cstdio>
#include <cstdlib>

template <typename T>
class stack{
  T a[101];
  unsigned n;
public:
  stack():a(),n(0){}
  T& top(){return a[n-1];}
  T pop(){return a[--n];}
  void push(T in){a[n++]=in;}
};

int main(){
  stack<int> s;
  char buf[100];

  while(scanf("%s",buf) != EOF){
    int a;
    switch(buf[0]){
      case '+' : a = s.pop(); s.top() += a; break;
      case '-' : a = s.pop(); s.top() -= a; break;
      case '*' : a = s.pop(); s.top() *= a; break;
      default  : s.push(atoi(buf));
    }
  }
  printf("%d\n",s.top());
}