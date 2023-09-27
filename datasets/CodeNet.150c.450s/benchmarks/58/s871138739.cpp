#include <cstdio>
#include <cstdlib>

struct stack{
  int a[101];
  unsigned n;
  stack():a(),n(0){}
  int pop(){return a[--n];}
  void push(int in){a[n++]=in;}
};

int main(){
  stack s;
  char buf[10];

  while(scanf("%s",buf) != EOF){
    int a,b;
    switch(buf[0]){
      case '+' : a = s.pop(); b = s.pop(); s.push(b+a); break;
      case '-' : a = s.pop(); b = s.pop(); s.push(b-a); break;
      case '*' : a = s.pop(); b = s.pop(); s.push(b*a); break;
      default  : s.push(atoi(buf));
    }
  }
  printf("%d\n",s.pop());
}