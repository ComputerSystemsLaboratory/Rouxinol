#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int parent(int i) {
  return (i+1)/2 - 1;
}
int left(int i) {
  return 2*(i+1) - 1;
}
int right(int i) {
  return 2*(i+1)+1 - 1;
}
void downHeap(vector<int> &A,int i) {
  int n = A.size();
  int l = left(i);
  int r = right(i);
  int largest = i;
  // A[largest] = max(A[i],A[l],A[r])
  if(l < n) {
    if(A[l] > A[i])
      largest = l;
  }
  if(r < n) {
    if(A[r] > A[largest])
      largest = r;
  }
  if(largest != i) {
    swap(A[i],A[largest]);
    downHeap(A,largest);
  }
}
/*
void buildMaxHeap(vector<int> &A) {
  for(int i=(A.size()-1)/2;i>=0;i--) {
    downHeap(A,i);
  }
}
*/
void upHeap(vector<int> &A,int i) {
  int p = parent(i);
  if(p >= 0) {
    if(A[i] > A[p]) {
      swap(A[i],A[p]);
      upHeap(A,p);
    }
  }
}
void insert(vector<int> &A,int key) {
  A.push_back(key);
  upHeap(A,A.size()-1);
}
int extractMax(vector<int> &A) {
  int max = A[0];
  A[0] = A.back();
  A.pop_back();
  downHeap(A,0);
  return max;
}
int main() {
  vector<int> A;
  char buf[10];
  while(scanf("%s",buf)) {
    if(buf[0] == 'i') {
      int key; scanf("%d",&key);
      insert(A,key);
    }
    else if(buf[1] == 'x') {
      int max = extractMax(A);
      printf("%d\n",max);
    }
    else if(buf[2] == 'd') {
      break;
    }
  }
}