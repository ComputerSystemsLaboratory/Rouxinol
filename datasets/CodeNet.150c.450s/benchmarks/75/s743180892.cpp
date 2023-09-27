// maximum heap
// re-construct to max-heap
#include<iostream>
int parent(int);
int left(int);
int right(int);
void maxHeapify(int*, int);
void buildMaxHeap(int*);
int n;
int main(){
  int *T, i;
  std::cin >> n;
  T = new int[n+1];
  for(i=1; i<=n; i++) std::cin >> T[i];
  buildMaxHeap(T);
  for(i=1; i<=n; i++) std::cout << " " << T[i];
  std::cout << "\n";
  return 0;
}
int parent(int n){
  return n/2;
}
int left(int n){
  return 2*n;
}
int right(int n){
  return 2*n+1;
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