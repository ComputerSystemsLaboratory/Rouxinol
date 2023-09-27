#include<cstdio>
#include<string>
#include<queue>
using namespace std;

int main(){
  priority_queue<int> p;
  int x;
  char com[20];
  while(1){
    scanf("%s", com);
    
    if(com[2]=='s'){
      scanf("%d", &x);
      p.push(x);
    }
    else if(com[2]=='t'){
      printf("%d\n",p.top());
      p.pop();
    }
    else if(com[2]=='d') break;
  }
      
  return 0;
}
