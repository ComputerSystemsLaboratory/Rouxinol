//ALDS1_9C
#include <cstdio>
#include <string>
#include <queue>
using namespace std;

int main(){
 char com[20];
 priority_queue<int> PQ;
 while(true){
  scanf("%s",com);
  if(com[0]=='i'){
   int key;
   scanf("%d",&key);
   PQ.push(key);
  }else if(com[1]=='x'){
   printf("%d\n",PQ.top());
   PQ.pop();
  }else if(com[0]=='e'){
   break;
  }
 }
 return 0;
}