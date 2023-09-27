#include<iostream>
using namespace std;
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define MAX_V 5000000
int heap[MAX_V]{0};
int heap_size=0;

int left(int i){return 2*i+1;}
int right(int i){return 2*i+2;}
int parent(int i){return (i-1)/2;}
bool has_left(int i){return heap_size>left(i);}
bool has_right(int i){return heap_size>right(i);}

void max_heapify(int i){
  int l,r,largest;
  l=left(i); r=right(i);
  if(has_left(i)&&heap[l]>heap[i])
    largest=l;
  else
    largest=i;
  if(has_right(i)&&heap[r]>heap[largest])
    largest=r;
  if(largest!=i){
    swap(heap[i],heap[largest]);
    max_heapify(largest);
  }
}
void heap_increase_key(int i,int key){
  if(key<heap[i])
    return;
  heap[i]=key;
  while(i>0&&heap[parent(i)]<heap[i]){
    swap(heap[i],heap[parent(i)]);
    i=parent(i);
  }
}
void max_heap_insert(int key){
  heap[heap_size]=0x80000000;
  heap_size++;
  heap_increase_key(heap_size-1,key);
}
int heap_extract_max(){
  if(heap_size<1)
    return -1;
  int max=heap[0];
  heap[0]=heap[--heap_size];
  max_heapify(0);
  return max;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  for(;;){
    string str; cin>>str;
    if(str=="end")
      break;
    else if(str=="insert"){
      int key; cin>>key;
      max_heap_insert(key);
    }
    else if(str=="extract"){
      int item=heap_extract_max();
      cout<<item<<"\n";
    }
  }
}