#include <iostream>
using namespace std;

int H;

int left(int i) {return 2 * i;}
int right(int i) {return 2 * i + 1;}

void maxHeapify(int *A, int i)
{
  int l = left(i);
  int r = right(i);
  int largest;
  if (l <= H && A[i] < A[l]) {
    largest = l;
  } else {
    largest = i;
  }
  if (r <= H && A[largest] < A[r]) {
    largest = r;
  }
  if (largest != i) {
    swap(A[i], A[largest]);
    maxHeapify(A, largest);
  }
}

void buildmaxHeap(int *A)
{
  for (int i = H / 2; i > 0; i--) {
    maxHeapify(A, i);
  }
}

int main()
{
  int A[1999999];
  cin >> H;
  for (int i = 1; i <= H; i++) cin >> A[i];
  buildmaxHeap(A);
  for (int i = 1; i <= H; i++) cout << " " << A[i];
  cout << endl;
  return 0;
}