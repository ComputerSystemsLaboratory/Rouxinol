#include <bits/stdc++.h>
using namespace std;

int d[333];
int cnt;

void push(int n){
  d[cnt] = n;
  cnt++;
}

int pop(){
  int key = d[cnt-1];
  cnt--;
  return key;
}

int main(){

  char str[333];
  while(scanf("%s",str) != EOF){
    int a, b;
    if(str[0] == '*'){
      a = pop();
      b = pop();
      push(a*b);
    }else if(str[0] == '-'){
      a = pop();
      b = pop();
      // cout << a-b << endl;
      push(b-a);
    }else if(str[0] == '+'){
      a = pop();
      b = pop();
      push(a+b);
    }else if(str[0] == '/'){
      a = pop();
      b = pop();
      push(b/a);
    }else push(atoi(str));
  }

  cout << pop() << endl;

}