#include<iostream>
#include<algorithm>
using namespace std;

int h;

int parent(int i){ //index of parent
  return i / 2;
}

int left(int i){ //index of left child
  return 2 * i;
}

int right(int i){ //index of right child
  return 2 * i + 1;
}

void maxHeapify(int *A, int i){
  int l, r, largest;

  l = left(i);
  r = right(i);

  //update largest value
  if(l <= h && A[l] > A[i]) largest = l;
  else largest = i;

  if(r <= h && A[r] > A[largest]) largest = r;

  //swap the elements to proper places
  if(largest != i){
    swap(A[i], A[largest]);
    maxHeapify(A, largest);
  }
}

void buildMaxHeap(int *A){
  for(int i = h / 2;i >= 1;i--) maxHeapify(A, i);
}

int main(){

  int a[500010];

  //input
  cin >> h;
  for(int i = 1;i <= h;i++) cin >> a[i];

  buildMaxHeap(a);

  //output
  for(int i = 1;i <= h;i++) cout << " " << a[i];
  cout << endl;

  return 0;
}

