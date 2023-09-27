#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
int main(){

  priority_queue <int> a;
  int tmp1;
  char tmp2[10];

  while(scanf("%s",tmp2),tmp2[2]!='d'){
    if(tmp2[0]=='i'){
      scanf("%d",&tmp1);
      a.push(tmp1);
    }
    else{
      printf("%d\n",a.top());
      a.pop();
    }
  }
  return 0;

}