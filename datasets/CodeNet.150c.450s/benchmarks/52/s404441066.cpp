#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;

stack<int> sta;

int main(void)
{
  int a;
  while(scanf("%d", &a)!=EOF){
    if(a)
      sta.push(a);
    else{
      cout<<sta.top()<<endl;
      sta.pop();
    }
  }
  return 0;

}