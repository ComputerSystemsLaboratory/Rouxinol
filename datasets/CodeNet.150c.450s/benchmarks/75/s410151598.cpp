#include <bits/stdc++.h>
using namespace std;
#define MAX 2000000

int H,A[MAX+1];

int left(int a){
  return 2*a;
}

int right(int a){
  return 2*a+1;
}

void maxHeapify(int *A,int i){
  int l = left(i);
  int r = right(i);
  int largest;
  // 左の子、自分、右の子で値が最大のノードを選ぶ
  if (l <= H && A[l] > A[i]) largest = l;
  else largest = i;
  if (r <= H && A[r] > A[largest]) largest = r;
  if (largest != i){
    swap(A[i],A[largest]);
    maxHeapify(A, largest);
  }// 再帰的に呼び出し
}

void buildMaxHeap(int *A){
  for (int i = H/2;i >= 1;i--) maxHeapify(A, i);
}

int main(){
  int i;

  cin >> H;
  for(i=1;i<=H;i++) cin >> A[i];
  buildMaxHeap(A);
  for(i=1;i<=H;i++) cout << " " << A[i];
  cout << endl;
  return 0;
}
