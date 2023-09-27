#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cstdio>
#include<queue> 

using namespace std;
 
int main(void){
 
  priority_queue<int> que;
  char ch[10];
  int k;
 
  while(true){
    scanf(" %s",ch);
    if(ch[2]=='d')break;
    if(ch[0]=='i'){
      scanf("%d",&k);
      que.push(k);
    } else {
      printf("%d\n",que.top());
      que.pop();
    }
  }
 
  return 0;
}