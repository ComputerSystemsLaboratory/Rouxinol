#include<stdio.h>
#include<stdlib.h>
#define QSIZE (100000)

struct proc *Qu[QSIZE];
int soq=0,eoq=0;

struct proc{
  char name[11];
  int ti;
};

struct proc *enQ(struct proc *data){
  Qu[eoq] = data;
  eoq = (eoq+1)%QSIZE;
  return data;
}

struct proc *deQ(){
  int oldSt;
  if(soq==eoq){
    return NULL;
  }
  oldSt = soq;
  soq = (soq+1)%QSIZE;
  return Qu[oldSt];
}

int main(){
  int n,q;
  int i;
  int total = 0;
  struct proc *data;
  scanf("%d %d",&n,&q);
  for(i=0;i<n;i++){
    data = (struct proc*)malloc(sizeof(struct proc));
    scanf("%s %d",(*data).name,&((*data).ti));
    enQ(data);
  }
  while(n>0){
    data = deQ();
    if(data->ti > q){
      total+=q;
      data->ti -=q;
      enQ(data);
    }else{
      total += data->ti;
      printf("%s %d\n",data->name,total);
      n--;
    }
  }
}