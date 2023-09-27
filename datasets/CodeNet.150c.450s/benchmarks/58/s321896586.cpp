#include <cstdio>
#include <cstdlib>

class stack{
  int top;
  int s[100];
public:
  stack():top(0),s(){}
  void push(int x){
    s[++top] = x;
  }
  int pop(){
    return s[top--];
  }
};

int main(){
  int a,b,x;
  char s[100];
  stack st;
  while( scanf("%s", s) != EOF ){
    if ( s[0] == '+' ){
      a = st.pop();
      b = st.pop();
      st.push(a + b);
    }
    else if ( s[0] == '-' ){
      b = st.pop();
      a = st.pop();
      st.push(a - b);
    }
    else if ( s[0] == '*' ){
      a = st.pop();
      b = st.pop();
      st.push(a * b);
    }
    else {
      x = atoi(s);
      st.push(x);
    }
  }

  printf("%d\n", st.pop());

  return 0;
}