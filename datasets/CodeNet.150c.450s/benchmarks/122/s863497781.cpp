#include<bits/stdc++.h>
#define INFTY (1<<30)
using namespace std;

int h,heap[22000001];

void maxheap(int i){
  int l,r,lage;
  
  l=i*2;
  r=i*2+1;
  lage=i;

  if(l<=h&&heap[l]>heap[lage])lage=l;
  if(r<=h&&heap[r]>heap[lage])lage=r;
  
  if(lage!=i){
    swap(heap[i],heap[lage]);
    maxheap(lage);
  }
  
  return;
}

void increasekey(int i,int key){
  if(key<heap[i])return ;
  
  heap[i]=key;
  while(i>1&&heap[i/2]<heap[i]){
    swap(heap[i/2],heap[i]);
    i=i/2;
  }
}

void insert(int key){
  h++;
  heap[h]=-INFTY;
  increasekey(h,key);
}

int extract(){
  int maxv;
  if(h<1) return -INFTY;
  maxv=heap[1];
  heap[1]=heap[h];
  h--;
  maxheap(1);
  return maxv;
}
  
int main(){
  int key;
  string com;
  
  cin >> com;
  while(com!="end"){
    if(com=="insert"){
      scanf("%d",&key);
      insert(key);
    }else{
      printf("%d\n",extract());
    }
    
    cin >> com;
  }
  
  return (0);
}

