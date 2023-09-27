#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

const int LEN=100005;
using namespace std;

typedef struct {
  char name[15];
  int t;
}process;

int head=0,tail=0;
process S[LEN];

void enqueue(process x){
  S[tail]=x;
  tail = (tail+1)%LEN;
}

process dequeue(){
  process x=S[head];
  head=(head+1)%LEN;
  return x;
}

int main(){
  int n,q,Time=0;
  scanf("%d %d",&n,&q);
  process r;
  for(int i=1;i<=n;i++){
    scanf("%s",S[i].name);
    scanf("%d",&S[i].t);
  }
  head=1,tail=n+1;
  while(head!=tail){
    r=dequeue();
    if(r.t>q){
      r.t-=q;
      Time+=q;
      enqueue(r);
    }
    else {
      Time+=r.t;
      printf("%s %d\n",r.name,Time);
    }
  }
  return 0;
}