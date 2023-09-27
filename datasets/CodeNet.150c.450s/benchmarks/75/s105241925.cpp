#include <iostream>
#define NIL 3000000000;
using namespace std;

class maximumHeap{
public:
  int size;
  long long int* heap;
  maximumHeap(int size){
    this->size = size;
    heap = new long long int[size+1];
    for(int i=1; i<=size; i++) heap[i]=NIL;
  }
  ~maximumHeap(){
    delete[] heap;
  }

  void buildMaxHeap(){
    for(int i=size/2; i>=1; i--){
      maxHeapify(i);
    }
  }

  void print(){
    for(int i=1; i<=size; i++){
      cout << " " << heap[i];
    }
    cout << endl;
  }
private:
  void  maxHeapify(int i){
    int l=i*2, r=i*2+1;
    int largest=i;

    if(l<=size){
      if(heap[l]>heap[i]) largest = l;
    }
    else largest = i;

    if(r<=size){
      if(heap[r]>heap[largest]) largest = r;
    }

    if(largest!=i){
      long long int temp=heap[i];
      heap[i]=heap[largest];
      heap[largest]=temp;
      maxHeapify(largest);
    }
  }
};

int main(){
  int n; cin >> n;
  maximumHeap mh(n);

  int v;
  for(int i=0; i<n; i++){
    cin >> v;
    mh.heap[i+1] = v;
  }

  mh.buildMaxHeap();

  mh.print();

  return 0;
}

