// priority queue
#include<iostream>
#include<string>
#define MAX 2000000
#define nINF -1
int parent(int);
int left(int);
int right(int);
void maxHeapify(int*, int);
void buildMaxHeap(int*);
void insert(int*, int);
void heapIncreaseKey(int*, int);
int extractMax(int*);
int n=0;
int main(){
  int *T, key;
  std::string func, ins="insert", ext="extract", end="end";
  T = new int[MAX];
  while(1){
    std::cin >> func;
    if(func == end) break;
    else if(func == ins){
      std::cin >> key;
      insert(T, key);
    }
    else if(func == ext) std::cout << extractMax(T) << "\n";
  }
  return 0;
}
int parent(int x){
  return x/2;
}
int left(int x){
  return 2*x;
}
int right(int x){
  return 2*x+1;
}
  void maxHeapify(int *A, int i){
    int l=left(i), r=right(i), largest, temp;
    if(l <= n && A[l] > A[i]) largest = l;
    else largest = i;
    if(r <= n && A[r] > A[largest]) largest = r;
    if(largest != i){
      temp = A[i];
      A[i] = A[largest];
      A[largest] = temp;
      maxHeapify(A,largest);
    }
  }
  void buildMaxHeap(int *A){
    int i;
    for(i=n/2; i>0; i--) maxHeapify(A,i);
  }
  void insert(int *A, int key){
    n++;
    A[n] = nINF;
    heapIncreaseKey(A, key);
  }
  void heapIncreaseKey(int *A, int key){
    int temp, i=n;
    if(key < A[i]) std::cout << "Error\n";
    A[i] = key;
    while(i > 1 && A[parent(i)] < A[i]){
      temp = A[i];
      A[i] = A[parent(i)];
      A[parent(i)] = temp;
      i = parent(i);
    }
  }
  int extractMax(int *A){
    int max;
    if(n < 1) std::cout << "Error\n";
    max = A[1];
    A[1] = A[n];
    n--;
    maxHeapify(A,1);
    return max;
  }