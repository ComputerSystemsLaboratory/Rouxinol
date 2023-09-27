#include <iostream>
#define MAX 2000000
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

void max_heapify_up(int key){
  if(key == 1) return;
  if(nodes[parent(key)] < nodes[key]){
    swap(nodes[parent(key)],nodes[key]);
    max_heapify_up(parent(key));
  }
}

void build_maxheap(){
  for(int i = n/2; i>=1; i--){
    max_heapify(i);
  }
}

void insert(int key){
  n++;
  nodes[n] = key;
  max_heapify_up(n);
}


int extract(){
  n--;
  int pop = nodes[1];
  nodes[1] = nodes[n+1];
  max_heapify(1);
  return pop;
}

int main(){
  n=0;
  string ope;

  while(1){
    cin>>ope;
    if(ope=="insert"){
      int key; cin>>key;
      insert(key);
    }else if(ope=="extract"){
      cout<<extract()<<endl;
    }else if(ope=="end"){
      break;
    }
  }
}