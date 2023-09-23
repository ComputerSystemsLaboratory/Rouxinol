#include <iostream>
using namespace std;

const int MAX = 500000;
int H, i, A[MAX+1];

int parent(int i){
  return i/2;
}
int left(int i){
  return 2*i;
}
int right(int i){
  return 2*i + 1;
}
void maxHeapify(int *A, int i){
  int l = left(i);
  int r = right(i);
  int largest;
  if (l <= H && A[l] > A[i]){
    largest = l;
  } else {
    largest = i;
  }
  if (r <= H && A[r] > A[largest]){
    largest = r;
  }

  if ( largest != i){
    int tmp = A[i];
    A[i] = A[largest];
    A[largest] = tmp;
    maxHeapify(A, largest);
  }


}

int main() {
    ios::sync_with_stdio(false);
    cin >> H;
    for(i=1; i<=H; i++) cin >> A[i];
    for(i=H/2; i>=1; i--){
      maxHeapify(A, i);
    }
    for(i=1; i<=H; i++) cout << " " << A[i];
    cout << endl;


}