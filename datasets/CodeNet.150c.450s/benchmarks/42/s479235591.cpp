#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct qeu{
  int n;
  char name[10];
}Qeu;
void init();
void enque(Qeu);
Qeu deque();

int head,tail;
Qeu Qo[100000];

void init(){
  head = 0;
  tail = 0;
}

void enque(Qeu Q){
  Qo[tail++] = Q;
  tail = tail % 100000;
}

Qeu deque(){
  Qeu x;
  x = Qo[head];
  head++;
  head = head %100000;
  return x;
}

int mini(int a,int b){
  if(a<b) return a;
  else return b;
}
  
int main(){
  Qeu Q,Qt[1000],Qnow;
  int i,n,time;
  int total,tt;
  total = 0;
  scanf("%d %d",&n,&time);

  for(i=0;i<n;i++){
    scanf("%s %d",Q.name,&Q.n);
    enque(Q);
  }
  while(1){
    if(head == tail) break;
    Qnow = deque();
    tt = mini(Qnow.n,time);
    Qnow.n -= tt;
    total += tt;
    if(Qnow.n == 0){
      printf("%s %d\n",Qnow.name,total);
    }
    else{
      enque(Qnow);
    }
  }
  return 0;
}