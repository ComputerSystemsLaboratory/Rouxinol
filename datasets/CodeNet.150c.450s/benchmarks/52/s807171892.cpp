#include <iostream>
#include <stack>
#include <queue>
#include <cstdio>
using namespace std;
int main(void)
{
  stack<int> in;
  queue<int> out;
  int c;
  while(scanf("%d",&c)!=EOF)
  {
    if(c==0){
      out.push(in.top());in.pop();
    }else{
      in.push(c);
    }
  }
  while(!out.empty())
  {
    cout<<out.front()<<endl;
    out.pop();
  }
  return 0;
}