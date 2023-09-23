#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;
int H;
void MaxHeap(int *A, int root){
  int l=2*root;
  int r=2*root+1;
  int largest;
  // choice left, myself, and right
  if((l<=H) && (A[l] > A[root])) largest=l;
  else largest=root;
  if((r<=H) && (A[r] > A[largest])) largest=r;

  //exchange node in case of child is bigger than node of i
  if(largest!=root) {
    //    cout << "hoge" << endl;
    swap(A[root], A[largest]);
    MaxHeap(A, largest);
  }
}

int main(){
  cin >> H;
  int A[2*H];
  A[0]=0;
  for(int i=1;i<=H;i++) cin >> A[i];
  for(int i=H/2;i>0;i--) MaxHeap(A,i);
  for(int i=1;i<=H;i++) cout << " " << A[i];
  cout << endl;
  return 0;
}

