#include<cstdio>
#include<iostream>
using namespace std;
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define MAX_V 500000
int heap[MAX_V]{0};

int left(int i){return 2*i+1;}
int right(int i){return 2*i+2;}
int parent(int i){return (i-1)/2;}
bool has_left(int size,int i){return size>left(i);}
bool has_right(int size,int i){return size>right(i);}

void max_heapify(int n, int i){
  int l,r,largest;
  l=left(i); r=right(i);
  if(has_left(n,i)&&heap[l]>heap[i])
    largest=l;
  else
    largest=i;
  if(has_right(n,i)&&heap[r]>heap[largest])
    largest=r;
  if(largest!=i){
    swap(heap[i],heap[largest]);
    max_heapify(n,largest);
  }
}
void build_max_heap(int size){
  for(int i=(size-1)/2;i>=0;i--)
    max_heapify(size,i);
}

int main(){
  int n; scanf("%d",&n);
  REP(i,n) scanf("%d",&heap[i]);
  build_max_heap(n);
  REP(i,n) printf(" %d",heap[i]);
  puts("");
}