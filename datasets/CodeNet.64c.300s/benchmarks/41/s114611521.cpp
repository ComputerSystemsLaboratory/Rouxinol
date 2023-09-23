#include<bits/stdc++.h>
using namespace std;

int h,heap[500001];

void maxheap(int i){
  int l,r,lage;
  
  l=i*2;
  r=i*2+1;
  lage=i;
  
  if(l<=h&&heap[l]>heap[lage]) lage=l;
  if(r<=h&&heap[r]>heap[lage]) lage=r;
  
  if(lage!=i){
    swap(heap[i],heap[lage]);
    maxheap(lage);
  }
  
}

int main(){
  scanf("%d",&h);
  for(int i=1;i<=h;i++) scanf("%d",&heap[i]);
  
  for(int i=h/2;i>=1;--i) maxheap(i);
  for(int i=1;i<=h;++i)printf(" %d",heap[i]);
  printf("\n");
  
  return (0);
}

