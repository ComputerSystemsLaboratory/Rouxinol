#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int H;

void maxHeapify(vector<ll> &A, int i){
  int l = i*2;
  int r = i*2+1;
  int largest;
  if(l <= H && A[l] > A[i])
    largest = l;
  else
    largest = i;
  if(r <= H && A[r] > A[largest])
    largest = r;
  if(largest != i){
    swap(A[i], A[largest]);
    maxHeapify(A, largest);
  }
}

void buildMaxHeap(vector<ll> &A){
  for(int i = H/2; i >= 1; i--){
    maxHeapify(A, i);
  }
}

int main(void){
  ios::sync_with_stdio(false);
  cin.tie(0);

  cin >> H;
  vector<ll> A(H+1);
  for(int i = 0; i < H; i++){
    cin >> A[i+1];
  }
  buildMaxHeap(A);
  for(int i  = 0; i < H; i++){
    cout << " " << A[i+1];
  }
  cout << endl;
  return 0;
}