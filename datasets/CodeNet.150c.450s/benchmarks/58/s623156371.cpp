#include <cstdio>
#include <cstdlib>
 
struct stack{
  int a[101];
  unsigned n;
  stack():a(),n(0){}
  int& top(){return a[n-1];}
  int pop(){return a[--n];}
  void push(int in){a[n++]=in;}
};
 
int main(){
  stack s;
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