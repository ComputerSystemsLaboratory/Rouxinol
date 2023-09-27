#include<bits/stdc++.h>
using namespace std;
int H,heap[2000001];

void maxHeapify(int i){
  int l,r,largest;
  l=i*2;
  r=i*2+1;

  //左の子、自分、右の子で値が最大のノードを選ぶ

  if(l<=H&&heap[l]>heap[i]) largest=l;
  else largest=i;

  if(r<=H&&heap[r]>heap[largest]) largest=r;

  if(largest!=i){
    swap(heap[i],heap[largest]);
    maxHeapify(largest);
  }
}

int main(){
  scanf("%d",&H);
  for(int i=1;i<=H;++i) scanf("%d",&heap[i]);

  for(int i=H/2;i>=1;i--) maxHeapify(i);

  for(int i=1;i<=H;i++){
    printf(" %d",heap[i]);
  }
  cout<<endl;

  return 0;
}

