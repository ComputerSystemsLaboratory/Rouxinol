#include<iostream>

using namespace std;

#define H_MAX 500000
#define left(i) (i*2)
#define right(i) (i*2 + 1)

int h, A[H_MAX + 1];

void maxHeapify(int i){
  int r = right(i);
  int l = left(i);
  int max = i;

  if(l <= h && A[l] > A[max])
    max = l;

  if(r <= h && A[r] > A[max])
    max = r;

  if(max != i) {
    swap(A[i],A[max]);
    maxHeapify(max);
  }
}

int main() {
  cin >> h;

  for(int i = 1; i <= h; i++){
    cin >> A[i];
  }

  for(int i = h/2; i >= 1; i--){
    maxHeapify(i);
  }

  for(int i = 1; i <= h; i++){
    cout << " " << A[i];
  }

  cout << "\n";
}

