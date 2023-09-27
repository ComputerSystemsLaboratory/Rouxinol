#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<stack>
using namespace std;

int main(){
  stack<int> stk;
  char s[10];
  while(scanf("%s",s)!=EOF){
    if(strcmp(s,"+")==0){
      int ope1 = stk.top();
      stk.pop();
      int ope2 = stk.top();
      stk.pop();
      stk.push(ope1+ope2);
    }
    else if(strcmp(s,"-")==0){
      int ope1 = stk.top();
      stk.pop();
      int ope2 = stk.top();
      stk.pop();
      stk.push(ope2-ope1);
    }
    else if(strcmp(s,"*")==0){
      int ope1 = stk.top();
      stk.pop();
      int ope2 = stk.top();
      stk.pop();
      stk.push(ope1*ope2);
    }
    else{
      int x = atoi(s);
      stk.push(x);
    }
  }
  printf("%d\n",stk.top());
  return 0;
}