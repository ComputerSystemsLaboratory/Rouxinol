#include<iostream>
using namespace std;
#define MAX 500000

int H, A[MAX+1];

int left(int i) {
  return 2*i;
}

int right(int i) {
  return 2*i+1;
}

void maxHeapify(int i) {
  int argmax;
  int l = left(i);
  int r = right(i);
  if (l<=H && A[i]<A[l]) {
    argmax = l;
  } else {
    argmax = i;
  }
  if (r<=H && A[argmax]<A[r]) {
    argmax = r;
  }

  if (argmax!=i) {
    swap(A[i], A[argmax]);
    maxHeapify(argmax);
  }
}

int main() {
  cin >> H;
  for (int i=1; i<=H; i++) {
    cin >> A[i];
  }

  for (int i=H/2; i>=1; i--) {
    maxHeapify(i);
  }

  for (int i=1; i<=H; i++) {
    cout << " " << A[i];
  }
  cout << endl;

  return 0;
}

