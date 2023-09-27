#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;

int main(void){
  stack<int> data;
  int a;

  while(scanf("%d",&a) != EOF){
    if(a) data.push(a);
    else {
      if(data.empty()) break;
      printf("%d\n",data.top());
      data.pop();
    }
  }

  return 0;
}