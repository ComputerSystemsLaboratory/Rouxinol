#include <iostream>
#define MAX 500000
using namespace std;

int nodes[MAX];
int n;

int left(int i){ return i*2; }
int right(int i){return i*2 + 1;}
int parent(int i){return i/2; }

void max_heapify(int key){
  int l = left(key);
  int r = right(key);
  int largest;
  if(l <= n && nodes[l] > nodes[key]){
    largest = l;
  }else{
    largest = key;
  }
  if(r <= n && nodes[r] > nodes[largest]){
    largest = r;
  }

  if(largest != key){
    swap(nodes[key],nodes[largest]);
    max_heapify(largest);
  }
}

void build_maxheap(){
  for(int i = n/2; i>=1; i--){
    max_heapify(i);
  }
}

int main(){
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>nodes[i];
  }

  build_maxheap();

  for(int i=1;i<=n;i++){
    printf(" %d",nodes[i]);
  }
  printf("\n");
}