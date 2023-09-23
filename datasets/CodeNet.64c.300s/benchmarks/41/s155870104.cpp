#include<bits/stdc++.h>
using namespace std;
int h,heap[2000001];
void maxHeapify(int i){
  int l,r,largest;
  l=i*2;
  r=i*2+1;
  if(l<=h && heap[l]>heap[i]) largest=l;
  else largest=i;
  if(r<=h && heap[r]>heap[largest]) largest=r;
  if(largest!=i){
    swap(heap[i],heap[largest]);
    maxHeapify(largest);
  }
}
int main(){
  scanf("%d",&h);
  for(int i=1;i<=h;i++) scanf("%d",&heap[i]);
  for(int i=h/2;i>=1;i--) maxHeapify(i);
  for(int i=1;i<=h;i++) printf(" %d",heap[i]);
  printf("\n");
  return 0;
}
   
