#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 2000000
#define INFTY (1<<30)
int H,A[MAX+1];
void maxHeapify(int);
void insert(int);
int increaseKey(int,int);
int extract();

void maxHeapify(int i){
  int l,r,largest,c;
  l=2*i;
  r=2*i+1;
  
  if(l<=H&&A[l]>A[i]) largest=l;
  else largest=i;
  if(r<=H&&A[r]>A[largest]) largest=r;

  if(largest!=i){
    c=A[i];
    A[i]=A[largest];
    A[largest]=c;
    maxHeapify(largest);
  }
}

void insert(int key){
  H++;
  A[H]=-INFTY;
  increaseKey(H,key);
}

int increaseKey(int i,int key){
  int n;
  if(key<A[i]) return 0;
  A[i]=key;
  while(i>1&&A[i/2]<A[i]){
    n=A[i];
    A[i]=A[i/2];
    A[i/2]=n;
    i=i/2;
  }
  return 0;
}

int extract(){
  int maxv;
  if(H<1) return -INFTY;
  maxv=A[1];
  A[1]=A[H--];
  maxHeapify(1);
  return maxv;
}

int main()
{
  int key;
  char com[10];

  while(1){
    scanf("%s",com);
    if(strcmp(com,"end")==0) break;
    if(strcmp(com,"insert")==0){
      scanf("%d",&key);
      insert(key);
    }
    else{
      printf("%d\n",extract());
    }
  }
  return 0;
}